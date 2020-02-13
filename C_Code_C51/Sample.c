/* 	File Name: Sample.C
	File Description: This C code is uploaded to 89C51 to create a heap that will have different buffers, buffer0 will store lower case character
                      and different characters like '+' will add buffer, '-' will delete buffer, '?' will display the characters in buffer0 and
                      discard them.
	Author Name: Nitik Satish Gupta
	Notes: HEAP SIZE is defined using #define in linker settings, to initiate Heap, _heap.c was imported into the project
	Malloc and Free Reference: https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
    Credits for Help: Dominic Doty, Tanmay Chaturvedi, Vatsal Shah, Rakesh Kumar, Abhijeet Shrivastava, Attharva Nanadavara, Akshita Bhasin
*/
#define DEBUG
#include <mcs51/at89c51ed2.h>
#include <mcs51/mcs51reg.h>     // Gives the Definitions of registers in mcs51
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <mcs51/lint.h>         // used for data types __xdata, __data
#ifdef DEBUG
#define DEBUGPORT(x) dataout(x); // generates a MOVX 0FFFFh,x where x is an 8-bit value
#else
#define DEBUGPORT(x) // empty statement, nothing passed on from the preprocessor to the compiler
#endif
/*	Name: dataout
	Description: Writing data to a memory space(0xFFFF)
	Inputs: a-> Number to store in memory
	Returns: void
*/
void dataout(int a)
{
    int *ptr =NULL;
    ptr=0xFFFF;
    *ptr=a;
}
uint8_t __xdata *buffer[10]={NULL};         // Pointer to Buffers
uint8_t __xdata *base_address[10]={NULL};   // Point to base address of the buffer
uint8_t __xdata *end_address[10]={NULL};    // Point to end address of the buffer
uint16_t Buffer_Size[10]={0};               // Array of Buffer Size
uint8_t Total_Char=0;                       // Total Number of characters received
uint8_t Storage_Char[10]={0};               // Array of Storage Characters
uint8_t Buffer_Num=1;                       // No. of Buffers made(by default we have to define 1
/*	Name: strtola
	Description: String to long integer converter
	Inputs: q-> pointer to the string
	Returns: res-> The resultant 16 bit integer
*/
uint16_t strtola(int *q)
{   uint8_t i=0,a;
    __data uint16_t res=0;
    do
    {   a=*q-'0';
        res=(res*10)+a;         // Logic from C99 basic itoa function
        *q++;
    }while(*q!=13);
    return res;
}
/*	Name: delay
	Description: create a delay of certain time
	Inputs: none
	Returns: none
*/
void delay()
{   uint32_t i=0;
    while(i<50000)
    {
        i++;
    };
}
/*	Name: uartinit()
	Description: initializing the register of UART for communication
	Inputs: None
	Returns: None
*/
void uartinit()
{
    TMOD = 0x20;
    SCON = 0x50;
    TH1 = 0xFD;
    TR1 =1;
}
/*	Name: putchar
	Description: Function that will allow the transmission of characters
	Inputs: c-> Integer to be sent
	Returns: returning 1 after data is sent
*/
int putchar(int c)
{
        while(!TI);                         // checking the TI interrupt bit, when it sets, the data is sent
        TI=0;
        SBUF = c;
        return 1;
}
/*	Name: getchar
	Description: Function that will receive characters
	Inputs: None
	Returns: integer value received from the user
*/
int getchar()
{
    while(!RI);                             // checking the RI interrupt bit, when it sets, the data is received
    RI=0;
    return SBUF;
}
/*	Name: getstr
	Description: Function that will receiving a string
	Inputs: None
	Returns: integer pointer value received from the user
*/
int *getstr()
{   DEBUGPORT(0x01);
    int buffer_char[10],i=0;
    buffer_char[0]=getchar();
    do
    {   printf_tiny("%c",buffer_char[i]);     //Getting the string value of characters one by one through uart.
        i++;
        buffer_char[i]=getchar();
    }while(buffer_char[i]!=13);
    return buffer_char;
}
/*	Name: add_buffer
	Description: Adding a Buffer to the heap with the size between 30 and 300
	Inputs: None
	Returns: None
*/
void add_buffer()
{DEBUGPORT(0x01);
    int *buffer_size=NULL;
    uint16_t buffer_int;
    printf_tiny("\n Enter Buffer_%d Size:",(Buffer_Num));
    buffer_size=getstr();
    buffer_int=strtola(buffer_size);
    if(buffer_int>=30 && buffer_int<=300)       // Checking the size between 30 and 300.
    {
            buffer[Buffer_Num] = ( uint8_t __xdata*)malloc(buffer_int);     //Dynamic Memory Allocation Using Malloc
            if(NULL == buffer[Buffer_Num])
            {
                printf_tiny("\n\rMemory not allocated");

            }
            else
            {
                printf_small("\n\rMemory allocated");
                Buffer_Size[Buffer_Num]=buffer_int;
                printf("\n\r Address:%p",buffer[Buffer_Num]);
                base_address[Buffer_Num]=buffer[Buffer_Num];
                end_address[Buffer_Num]=buffer[Buffer_Num]+(buffer_int/sizeof(uint8_t));
                Storage_Char[Buffer_Num]=0;
                Buffer_Num++;
            }
    }
    else
    printf_tiny("\n\rNot Defined Space");
}
/*	Name: delete_buffer
	Description: Deleting a Buffer from the heap specified by the user
	Inputs: None
	Returns: None
*/
void delete_buffer()
{   DEBUGPORT(0x01);
    uint8_t Buffer_Num_delete;
    printf_tiny("\n Enter Buffer number to be deleted:");
    Buffer_Num_delete=getchar()-'0';
    if(Buffer_Num_delete<Buffer_Num)
    {
            free(buffer[Buffer_Num_delete]);            //Freeing the dynamic memory allocated in heap
            printf_tiny("\n\rBuffer_%d Successfully Removed.",Buffer_Num_delete);
            buffer[Buffer_Num_delete]=NULL;
    }
    else
    {
            printf_tiny("\n\rInvalid Buffer Number.");
    }
}
/*	Name: display_buffers
	Description: Displaying the Buffer data from the heap, depends on user what to display, only buffer_0 or the whole array of buffers
	Inputs: a-> no. of buffers to be displayed
	Returns: None
*/
void display_buffers(uint8_t a)
{   DEBUGPORT(0x01);
    uint8_t __xdata *i;
    uint16_t j,k;
    for(k=0;k<a;k++)
    {
        if(buffer[k]!=NULL)
        {   printf_tiny("Buffer_%d:",k);
            printf("\n\rBase Address:%p",base_address[k]);
            printf("\n\rEnd Address:%p",end_address[k]);
            printf_tiny("\n\rStorage Chars:%d",Storage_Char[k]);
            printf_tiny("\n\rSize:%d",Buffer_Size[k]);
            printf_tiny("\n\rFree Space:%d",Buffer_Size[k]-(Storage_Char[k]));
            if(k==0)
            {
                for(i=base_address[k],j=0;j<Storage_Char[k];i++,j++)
                {
                    if(j%16==0)
                        printf("\n\r%p",i);
                    printf_tiny(" %c",*i);
                }
            }
        }
    }
}
/*	Name: free_all()
	Description: Freeing all the buffers declared
    Inputs: None
	Returns: None
*/
void free_all()
{   uint8_t i;
    for(i=0;i<Buffer_Num;i++)
    {
        free(buffer[i]);
        printf_tiny("\n\rBuffer_%d Successfully Removed.",i);
        buffer[i]=NULL;
    }
}
void main(void)
{
    uint8_t all,sel;            // all-> allocation of buffer0, if true, then only proceed further, sel-> Character to be inserted
    unsigned int i=0;           // i-> in main() function, the number of characters stored
    int *b=NULL;
    uint16_t p;
    printf_tiny("\n\r%d",Storage_Char[1]);
    Buffer_Num=1;
    while(1)
    {
    DEBUGPORT(0x01);
    b=NULL;
    p=0;
    all=0;
    printf_tiny("\n\r Enter Numbers:");
    b=getstr();
    p=strtola(b);
    if(p>=32 && p<=3200)
    {
       if(p%16==0)
       {
          buffer[0] = (uint8_t __xdata*)malloc(p);
            if(NULL == buffer[0])
            {
                printf_tiny("\n\rMemory not allocated");

            }
            else
            {   DEBUGPORT(0x01);
                Buffer_Size[0]=p;
                printf_small("\n\rMemory allocated");
                printf("\n\r Address:%p",buffer[0]);
                base_address[0]=buffer[0];
                end_address[0]=buffer[0]+(Buffer_Size[0]/sizeof(uint8_t));  // The base address is added with the maximum number of characters that can be stored in the heap
                all=1;
            }
        }
       else
        printf_tiny("\n\rNot Defined Space");
    }
    else
        printf_tiny("\n\rNot Defined Space");
    if(1==all)
    {

       do {
            printf_tiny("\n\r Notes:");
            printf_tiny("\n\r 1. a-z will be stored in buffer.");
            printf_tiny("\n\r 2. + will add more buffer space.");
            printf_tiny("\n\r 3. - will remove the buffer space.");
            printf_tiny("\n\r 4. ? will show the Buffer Report.");
            printf_tiny("\n\r 5. = show the content in buffer_0.");
            printf_tiny("\n\r 6. @ Empty all buffers and Reset.");
            printf_tiny("\n\r Enter the Character:");
            sel=getchar();
            printf_tiny("%c",sel);
            Total_Char++;
            DEBUGPORT(0x02);
            switch(sel)                                 // Switch case to check the required operation for each character
            {
                case 43 : add_buffer();
                            break;
                case 45 : delete_buffer();
                            break;
                case 63 : display_buffers(Buffer_Num);
                            Storage_Char[0]=0;
                            i=0;
                            break;
                case 61 : display_buffers(1);
                            break;
                case 64 : free_all();
                            break;
                default: if(sel>=97 && sel<=122)
                        {
                            *(buffer[0]+i)=sel;
                            i++;
                            Storage_Char[0]++;
                        }
                        break;
            }
        }while(sel!=64);
    }
    }
}

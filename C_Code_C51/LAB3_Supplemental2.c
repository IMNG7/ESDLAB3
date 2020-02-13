/*
 */

#include <mcs51/8051.h>
#include <mcs51/at89c51ed2.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void uartinit()
{
    TMOD = 0x20;
    SCON = 0x50;
    TH1 = 0xFD;
    TR1 =1;
}
int putchar(int c)
{
        while(!TI);                         // checking the TI interrupt bit, when it sets, the data is sent
        TI=0;
        SBUF = c;
        return 1;
}
int getchar()
{
    while(!RI);                             // checking the RI interrupt bit, when it sets, the data is received
    RI=0;
    return SBUF;
}
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
void WtdRef()
{
    IE = IE & 0xBF;
    CCAP4L = 0x00;
    CCAP4H = CH;
    IE = IE | 0x40;

}
void main(void)
{
    uint8_t a;
    CH=0;
    CL=0;
    CMOD = 0x43;
    IE=0xC0;
    CR=1;
    // Insert code
    do
    {   CKCON0=0;
        printf_tiny("\n\r Welcome to Supplemental Part DEMO");
        printf_tiny("\n\r Your Choices Are:");
        printf_tiny("\n\r 1. START PWM");
        printf_tiny("\n\r 2. STOP PWM");
        printf_tiny("\n\r 3. MAXIMUM FREQUENCY");
        printf_tiny("\n\r 4. MINIMUM FREQUENCY");
        printf_tiny("\n\r 5. IDLE MODE");
        printf_tiny("\n\r 6. POWER DOWN MODE");
        printf_tiny("\n\r 7. EXIT");
        printf_tiny("\n\r Enter Options:");
        a=getchar();
        putchar(a);
            switch(a)
            {
            case '1':printf_tiny("\n\n\r STARTING PWM \n\r");
                    CKCON0=1;
                    CH=0;
                    CL=0;
                    CCAP2L = 0x40;
                    CCAP2H = 0x8D;
                    CCAPM2= 0x42;
                    break;
            case '2':
                    printf_tiny("\n\n\r STOPING PWM\n\r");
                    CKCON0=1;
                    CH=0;
                    CL=0;
                    CCAPM2= 0x00;
                    break;
            case '3':
                    printf_tiny("\n\n\r Maximum Frequency\n\r");
                    CKCON0=1;
                    CH=0;
                    CL=0;
                    CKRL = 0xFF;
                    break;
            case '4':
                    printf_tiny("\n\n\r Minimum Frequency\n\r");
                    CKCON0=1;
                    CKRL = 0x00;
                    break;
            case '5':
                    printf_tiny("\n\n\r IDLE MODE\n\r");
                    CKCON0=1;
                    PCON=1;
                    break;
            case '6':
                    printf_tiny("\n\n\r POWER DOWN MODE\n\r");
                    PCON=2;
                    CKCON0=1;
                    break;
            case '7':
                        break;
            default: printf_tiny("\n\n\r Sorry Wrong Option, Enter Again\n\r");
                    break;
            }
    }while(a!='7');
}

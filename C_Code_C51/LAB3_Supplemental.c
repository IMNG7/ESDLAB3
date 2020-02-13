/*
 */

#include <mcs51/8051.h>
#include <mcs51/at89c51ed2.h>
#include <stdint.h>
#include <stdio.h>
uint16_t capture1,capture2;

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
void PCA_ISR() __interrupt 6
{
unsigned int temp;
IE = IE & 0xBF; // Stop Interrupts
CCF0 = 0; // Clear Int flag
temp = CCAP0L | (CCAP0H << 8); // The following four lines
temp += 0x4E20; // of code increase the
CCAP0L = temp; // compare value in CCAP0
CCAP0H = temp >> 8; // by 20000, effectively
// refreshing the timer.
IE = IE | 0x40; // Start interrupts
}
void delay()
{   uint16_t i=0;
    while(i!=1000)
    {
        i++;
    }
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
    //uartinit();
    // Insert code
    CKCON0=1;
    CH=0;
    CL=0;
    CMOD = 0x43;
    CCAP0L = 0x20; // Set compare limit for module 0
    CCAP0H = 0x4E;
    CCAPM0 = 0x4D; // Set Modules zero for 16bit Timer mode.
    CCAP2L = 0x40; // Set compare limit for module 2
    CCAP2H = 0x8D;
    CCAPM2= 0x42;   // SET MODULE 2 as PWM Mode
    CCAP4L = 0xFF;
    CCAP4H = 0xFF;
    CCAPM4 = 0x4C;  // SET MODULE 4 as PWM Mode
    IE=0xC0;
    CR=1;
    while(1)
    {   //uint8_t c=putchar(getchar());
        WtdRef();
        delay();
    }
}

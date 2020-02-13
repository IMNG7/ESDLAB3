/*****************************************************************************
*
* Copyright (C) 2013 - 2017 Texas Instruments Incorporated - http://www.ti.com/
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* * Redistributions of source code must retain the above copyright
*   notice, this list of conditions and the following disclaimer.
*
* * Redistributions in binary form must reproduce the above copyright
*   notice, this list of conditions and the following disclaimer in the
*   documentation and/or other materials provided with the
*   distribution.
*
* * Neither the name of Texas Instruments Incorporated nor the names of
*   its contributors may be used to endorse or promote products derived
*   from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************
*
* MSP432 empty main.c template
*
******************************************************************************/
/* 	File Name: Part_Three.c
	File Description: A program for MSP432, which is enabling uart for user interface,
asking the user to enter 't' or 'p' to print the temperature or the duty cycle created using 
	the pwm module from the MSP432.
	Author Name: Nitik Satish Gupta
	
*/
#include "msp.h"
#include <stdio.h>
#include <stdint.h>
int32_t adcRefTempCal_1_2v_30;		// reference voltage for 30 C
int32_t adcRefTempCal_1_2v_85;		// reference voltage for 85 C
uint8_t d=0;
volatile float IntDegF;			// Float value to get temp in Fahrenheit
volatile float IntDegC;			// Float value to get temp in Celcius
volatile long temperature;
uint16_t dutycycle;			// dutycycle variable
char a[5],t1[5],t2[5],flag;		// a-> dutycycle string, t1-> Celcius, tw-> Fahrenheit
/*  Name: StringPrint
    Description:   Printing the string
    Inputs: prt-> the string to be printed
    Returns: none.
*/
void stringprint(char prt[])
{   uint8_t i=0;
    while(prt[i]!='\0')			// printing the string value
    {
          EUSCI_A0->TXBUF=(prt[i]);
          while(!(EUSCI_A0->IFG & EUSCI_A_IFG_TXIFG));
          i++;
    }
}
/*  Name: dyctochar
    Description:  Changing the duty cycle to string
    Inputs: prt-> duty cycle to be converted
    Returns: none.
*/
void dyctochar(uint16_t duty)
{
    a[3]='\0';				// changing the dutycyle value to string
    a[2]='%';
    a[1]=(duty%10)+'0';
    duty=duty/10;
    a[0]=(duty%10)+'0';
}
/*  Name: temptochar
    Description:  Changing the temperature to string
    Inputs: prt-> temperature to be converted
    Returns: none.
*/
void temptochar(uint16_t temp)		// changing the temperature value to string
{
    if(temp<100)
    {
        t1[2]='\0';
        t2[2]='\0';
        t1[1]=(temp%10)+'0';
        t2[1]=(temp%10)+'0';
        temp=temp/10;
        t1[0]=(temp%10)+'0';
        t2[0]=(temp%10)+'0';
    }
    else if(temp>100)
    {
        t1[3]='\0';
        t1[2]=(temp%10)+'0';
        temp=temp/10;
        t1[1]=(temp%10)+'0';
        temp=temp/10;
        t1[0]=(temp%10)+'0';
    }
}
void TA0_0_IRQHandler(void)		// IRQ handler for Transmit uart
{
  TIMER_A0->CCTL[0] &= ~TIMER_A_CCTLN_CCIFG;
  P2->OUT = BIT0;
}
void TA0_N_IRQHandler(void) {		// IRQ handler for Receive uart
  TIMER_A0->CCTL[1] &= ~TIMER_A_CCTLN_CCIFG;
  P2->OUT = ~BIT0;
}
void EUSCIA0_IRQHandler(void)		// IRQ handler for UART display
{
    if (EUSCI_A0->IFG & EUSCI_A_IFG_RXIFG)
    {
        // Check if the TX buffer is empty first
        while(!(EUSCI_A0->IFG & EUSCI_A_IFG_TXIFG));
        //flag=0;
        // Echo the received character back
        EUSCI_A0->TXBUF = EUSCI_A0->RXBUF;

        if(EUSCI_A0->RXBUF == 'p')
        {   flag='p';
        }
        if(EUSCI_A0->RXBUF == 't')
        {   flag='t';
            d=1;
        }
        if(EUSCI_A0->RXBUF == 'i')
        {   flag='i';
        }
        if(EUSCI_A0->RXBUF == 'd')
        {   flag='d';
        }
        if(d==1)
        {
            if(EUSCI_A0->RXBUF == 'c')
            {
                    flag='c';
                    d=0;
            }
            else if(EUSCI_A0->RXBUF == 'f')
            {
                     flag='f';
                     d=0;
            }
            else if(flag !='t')
            {   char e[]="\n\rSorry wrong option.";
                stringprint(e);
            }
        }
    }
}
void ADC14_IRQHandler(void)		// IRQ handler for ADC Display
{
    if (ADC14->IFGR0 & ADC14_IFGR0_IFG0)
    {
        temperature = ADC14->MEM[0];
    }
}

void PORT1_IRQHandler(void)		// IRQ handler for push buttons Interrupts
{	
    volatile uint32_t i;

    // Toggling the output on the LED
    if(P1->IFG & BIT4)
    {
        if(TIMER_A0->CCR[1]<58989)
        TIMER_A0->CCR[1]+=6555;
        else
        TIMER_A0->CCR[1]=65533;
        char d[]="\n\rDuty Cycle Increased:";
        stringprint(d);
    }
    else if(P1->IFG & BIT1)
    {
        if(TIMER_A0->CCR[1]>6555)
        TIMER_A0->CCR[1]-=6553;
        else
        TIMER_A0->CCR[1]=0;
        char d[]="\n\rDuty Cycle Decreased:";
        stringprint(d);
    }
    dutycycle=(TIMER_A0->CCR[1]*100)/(TIMER_A0->CCR[0]);
    dyctochar(dutycycle);
    // Delay for switch debounce
    for(i = 0; i < 10000; i++)
    P1->IFG &= ~BIT4;

    for(i = 0; i < 10000; i++)
    P1->IFG &= ~BIT1;
}
/*  Name: Pins_Init()
    Description:  Initializing the pins for use
    Inputs: none
    Returns: none.
*/
void Pins_Init()		// Initializing the pins for use
{
    P1DIR |= BIT0;
        P2DIR |= BIT0;
        P1OUT |= BIT0;
        P2OUT |= BIT0;
        P1->DIR |= ~(uint8_t) BIT4 |~(uint8_t) BIT1;              // setting pin1.1 as input
        P1->OUT |= BIT4|BIT1;                         // pin is pulled up  ??
        P1->REN |= BIT4|BIT1;                         // enable input with pull up resistor// Enable pull-up resistor (P1.1 output high)
        //P1->SEL0 |= 0;                           // general purpose input output is selected
        //P1->SEL1 |= 0;
        P1->IES |= BIT4 |BIT1;                         // Interrupt on high-to-low transition
        //P1->IFG |= 0;                            // Clear all P1 interrupt flags
        P1->IE |= BIT4 |BIT1;                          // Enable interrupt for P1.1
        NVIC->ISER[1] = 1 << ((PORT1_IRQn) & 31);
}
/*  Name: Pins_Init()
    Description:  Initializing the timer for pwm
    Inputs: none
    Returns: none.
*/
void timeraccr_init()
{
        TIMER_A0->CCR[0]=65535;
        TIMER_A0->CCR[1]=26214;
        TIMER_A0->CCTL[0] = (TIMER_A_CCTLN_CCIE | TIMER_A_CTL_IE)   & ~(TIMER_A_CCTLN_CAP);
        TIMER_A0->CCTL[1] = (TIMER_A_CCTLN_CCIE | TIMER_A_CTL_IE) & ~(TIMER_A_CCTLN_CAP);
        TIMER_A0->CTL = TIMER_A_CTL_SSEL__SMCLK | TIMER_A_CTL_MC__CONTINUOUS; // SMCLK, continuous mode
        dutycycle=(TIMER_A0->CCR[1]*100)/(TIMER_A0->CCR[0]);
        dyctochar(dutycycle);
}
/*  Name: Uart_Init()
    Description:  Initializing the uart port for use
    Inputs: none
    Returns: none.
*/
void Uart_init()			// UART Initialization
{
    CS->KEY = CS_KEY_VAL;                   // Unlock CS module for register access
        CS->CTL0 = 0;                           // Reset tuning parameters
        CS->CTL0 = CS_CTL0_DCORSEL_3;           // Set DCO to 12MHz (nominal, center of 8-16MHz range)
        CS->CTL1 = CS_CTL1_SELA_2 |             // Select ACLK = REFO
                CS_CTL1_SELS_3 |                // SMCLK = DCO
                CS_CTL1_SELM_3;                 // MCLK = DCO
        CS->KEY = 0;                            // Lock CS module from unintended accesses

        // Configure UART pins
        P1->SEL0 |= BIT2 | BIT3;                // set 2-UART pin as secondary function

        // Configure UART
        EUSCI_A0->CTLW0 |= EUSCI_A_CTLW0_SWRST; // Put eUSCI in reset
        EUSCI_A0->CTLW0 = EUSCI_A_CTLW0_SWRST | // Remain eUSCI in reset
                EUSCI_B_CTLW0_SSEL__SMCLK;      // Configure eUSCI clock source for SMCLK
        // Baud Rate calculation
        // 12000000/(16*9600) = 78.125
        // Fractional portion = 0.125
        // User's Guide Table 21-4: UCBRSx = 0x10
        // UCBRFx = int ( (78.125-78)*16) = 2
        EUSCI_A0->BRW = 6;                     // 12000000/16/115200
        EUSCI_A0->MCTLW = (8 << EUSCI_A_MCTLW_BRF_OFS) |
                EUSCI_A_MCTLW_OS16;
        EUSCI_A0->CTLW0 &= ~EUSCI_A_CTLW0_SWRST; // Initialize eUSCI
        EUSCI_A0->IFG &= ~EUSCI_A_IFG_RXIFG;    // Clear eUSCI RX interrupt flag
        EUSCI_A0->IE |= EUSCI_A_IE_RXIE;        // Enable USCI_A0 RX interrupt

}
/*  Name: Tempmeas_Init()
    Description:  Initializing the temperature adc14
    Inputs: none
    Returns: none.
*/
void Tempmeas_Init()		// Temperature measurement initialization
{
    // Read the ADC temperature reference calibration value
      adcRefTempCal_1_2v_30 = TLV->ADC14_REF1P2V_TS30C;
      adcRefTempCal_1_2v_85 = TLV->ADC14_REF1P2V_TS85C;

      // Initialize the shared reference module
      // By default, REFMSTR=1 => REFCTL is used to configure the internal reference
      while(REF_A->CTL0 & REF_A_CTL0_GENBUSY);// If ref generator busy, WAIT
      REF_A->CTL0 |= REF_A_CTL0_VSEL_0 |      // Enable internal 1.2V reference
              REF_A_CTL0_ON;                  // Turn reference on

      REF_A->CTL0 &= ~REF_A_CTL0_TCOFF;       // Enable temperature sensor

      // Configure ADC - Pulse sample mode; ADC14_CTL0_SC trigger
      ADC14->CTL0 |= ADC14_CTL0_SHT0_6 |      // ADC ON,temperature sample period>5us
              ADC14_CTL0_ON |
              ADC14_CTL0_SHP;
      ADC14->CTL1 |= ADC14_CTL1_TCMAP;        // Enable internal temperature sensor
      ADC14->MCTL[0] = ADC14_MCTLN_VRSEL_1 |  // ADC input ch A22 => temp sense
              ADC14_MCTLN_INCH_22;
      ADC14->IER0 = 0x0001;                   // ADC_IFG upon conv result-ADCMEM0

      // Wait for reference generator to settle
      while(!(REF_A->CTL0 & REF_A_CTL0_GENRDY));

      ADC14->CTL0 |= ADC14_CTL0_ENC;
}
int main(void)
    {
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;
    Uart_init();
    Pins_Init();
    timeraccr_init();
    Tempmeas_Init();
   // SCB->SCR |= SCB_SCR_SLEEPONEXIT_Msk;
    __enable_irq();
    //__DSB();
    NVIC->ISER[0]=1<<((TA0_0_IRQn)&31);
    NVIC->ISER[0]=1<<((TA0_N_IRQn)&31);
    NVIC->ISER[0] = 1 << ((EUSCIA0_IRQn) & 31);
    NVIC->ISER[0] = 1 << ((ADC14_IRQn) & 31);// Enable ADC interrupt in NVIC module
    while (1)
      {
        ADC14->CTL0 |= ADC14_CTL0_SC;       // Sampling and conversion start
               // Temperature in Celsius
                      // The temperature (Temp, C)=
        IntDegC = (((float) temperature - adcRefTempCal_1_2v_30) * (85 - 30)) /(adcRefTempCal_1_2v_85 - adcRefTempCal_1_2v_30) + 30.0f;
                      //temptochar(IntDegC);
                      // Temperature in Fahrenheit
                      // Tf = (9/5)*Tc | 32
        IntDegF = ((9 * IntDegC) / 5) + 32;
        temptochar((uint16_t)IntDegF);
          switch(flag)
          {
          case 'p':{      flag=0;
                          char d[]="\n\rDuty Cycle:";
                          stringprint(d);
                          stringprint(a);
                      break;
                      }
          case 't': {flag=0;
                          char e[]="\n\rTemp in C or F";
                          stringprint(e);
                          break;
                      }
          case 'f' :{   flag=0;
                         temptochar((uint16_t)IntDegF);
                          char e[]="\n\rTemperature:";
                          stringprint(e);
                          stringprint(t2);
                      }
                      break;
          case 'c': {   flag=0;
                        temptochar((uint16_t)IntDegC);
                        char e[]="\n\rTemperature:";
                        stringprint(e);
                        stringprint(t1);
                      }
                      break;
          case 'i' : {  flag=0;
                      if(TIMER_A0->CCR[1]<58989)
                      TIMER_A0->CCR[1]+=6555;
                      else
                      TIMER_A0->CCR[1]=65533;
                      char d[]="\n\rDuty Cycle Increased:";
                      stringprint(d);
                      }
                      break;
          case 'd' : {  flag=0;
                          if(TIMER_A0->CCR[1]>6555)
                          TIMER_A0->CCR[1]-=6553;
                          else
                          TIMER_A0->CCR[1]=0;
                          char d[]="\n\rDuty Cycle Decreased:";
                          stringprint(d);
                      }
                      break;
          default:
                      break;
        }
  //        __sleep();

   //      __no_operation();                   // For debugger
      }
    return 0;
}

/* 
 * File:   main.c
 * Author: Techinfo
 *
 * Created on October 6, 2018, 10:30 PM
 */

#include <stdio.h>
#include <stdlib.h>


// PIC16F877A Configuration Bit Settings

// 'C' source line config statements
#define _XTAL_FREQ 20000000
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

#define OUTPUT 0
#define INPUT 1

#define ON 1
#define OFF 0

#define LED_PIN TRISC7
#define LED RC7

int main(int argc, char** argv) {
    LED_PIN = OUTPUT; //Make Portc Pin7 as output
    while (1) {
        LED = OFF; //Turn off LED
        __delay_ms(1000); //Wait for one seconds
        LED = ON; //Turn on LED        
        __delay_ms(1000); //Wait for one seconds
    }
    return (EXIT_SUCCESS);
}


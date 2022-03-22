/* 
 * File:   main.c
 * Author: ahmet
 *
 * Created on 06 A?ustos 2021 Cuma, 12:06
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include <xc.h>


void __interrupt()timer1(){
    
    TMR1=3035;
    
    static unsigned int counter=0;
    ++counter;
    
    if(counter==8){
        
        PORTBbits.RB0^=1;
        counter=0;
    }
    
    PIR1bits.TMR1IF=0;
    
    
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    init_configbits();
    
    TRISBbits.TRISB0=0;
    PORTB=0x00;
    
    INTCONbits.GIE=1;
    INTCONbits.PEIE=1;
    
    T1CONbits.TMR1ON=1;
    T1CONbits.TMR1CS=0;
    T1CONbits.T1CKPS1=1;
    T1CONbits.T1CKPS0=0;
    
    PIE1bits.TMR1IE=1;
    
    TMR1=3035;
    
    while(1){
        
        
    }
    
            
           

    return (EXIT_SUCCESS);
}


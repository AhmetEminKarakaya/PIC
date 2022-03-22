/* 
 * File:   main.c
 * Author: ahmet
 *
 * Created on 31 Temmuz 2021 Cumartesi, 14:08
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include <xc.h>


void __interrupt()timer_counter(){
    
    TMR0=253;
    
    static unsigned char counter=0;
    ++counter;
    PORTB=counter;
    
    if(counter==2){
        counter=0;
    }
    
    INTCONbits.TMR0IF=0;
}


/*
 * 
 */
int main(int argc, char** argv) {
    
    init_configbits();
    
    TRISAbits.TRISA4=1;
    TRISB=0x00;
    PORTB=0x00;
    INTCONbits.GIE=1;
    INTCONbits.T0IE=1;
    
    OPTION_REGbits.T0SE=0;
    OPTION_REGbits.T0CS=1;
    
    OPTION_REGbits.PSA=0;
    
    PS2=0;
    PS1=0;
    PS0=0;
    
    TMR0=253;
    
    while(1){
        
    }
    return (EXIT_SUCCESS);
}


/* 
 * File:   main.c
 * Author: ahmet
 *
 * Created on 31 Temmuz 2021 Cumartesi, 13:34
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include <xc.h>


void __interrupt() time_interrupt(){
    
    static int i=0;
    
    if(INTCONbits.TMR0IF && i==10){
        
        PORTBbits.RB0=1;
    }
    
    if(INTCONbits.TMR0IF && i==20){
        PORTBbits.RB0=0;
        i=0;
    }
    
    TMR0=59;
    INTCONbits.TMR0IF=0;
    
    
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    init_configbits();
    
    INTCONbits.GIE=1;
    INTCONbits.TMR0IE=1;
    OPTION_REGbits.T0CS=0;
    OPTION_REGbits.PSA=0;
    OPTION_REG |=7;
    TMR0=59;
    TRISBbits.TRISB0=0;
    PORTB=0x00;
    
    
    while(1){
        
        
        
        
    }
    

    return (EXIT_SUCCESS);
}


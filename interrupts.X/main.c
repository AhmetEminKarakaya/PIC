/* 
 * File:   main.c
 * Author: ahmet
 *
 * Created on 27 Temmuz 2021 Sal?, 22:13
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include <xc.h>
#include"interrupt.h"
/*
 * 
 */


void __interrupt() intern(){
    
    if(INTCONbits.INTF){
        
        PORTBbits.RB7=1;
        __delay_ms(5000);
        
        
    }
    
    PORTBbits.RB7=0;
    INTCONbits.INTF=0;
    
    
}



int main(int argc, char** argv) {
    
    init_configbits();
    
    
    TRISBbits.TRISB0=1;
    TRISBbits.TRISB1=0;
    TRISBbits.TRISB7=0;
    PORTB=0x00;
    
    di_ex_fall();
    while(1){
        
    PORTBbits.RB1=~PORTBbits.RB1;
    __delay_ms(3000);
        
    }

    return (EXIT_SUCCESS);
}


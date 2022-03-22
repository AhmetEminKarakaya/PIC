/* 
 * File:   mainn.c
 * Author: ahmet
 *
 * Created on 31 Temmuz 2021 Cumartesi, 11:56
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include "interrupt.h"
#include <xc.h>


void __interrupt()port_interrupt(){
    PORTB=0x00;
    
    if(INTCONbits.RBIF && PORTBbits.RB4){
        
        PORTBbits.RB0=1;
        __delay_ms(3000);
    }
    else if(INTCONbits.RBIF && PORTBbits.RB5){
        
        PORTBbits.RB1=1;
        __delay_ms(3000);
    }
    else if(INTCONbits.RBIF && PORTBbits.RB6){
        PORTBbits.RB2=1;
        __delay_ms(3000);
    }
    
    else if(INTCONbits.RBIF && PORTBbits.RB7){
        PORTB |=7;
        __delay_ms(3000);
    }
    INTCONbits.RBIF=0;
    
}

/*
 * 
 */
int main() {

    init_configbits();
    TRISB=0xF0;
    PORTB=0x00;
    ei_portb();
    
    while(1){
        
        PORTBbits.RB1=1;
        PORTBbits.RB2=1;
        
        
        
    }
    
            
    
    
    
    
    return (EXIT_SUCCESS);
}


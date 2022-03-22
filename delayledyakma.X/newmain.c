/* 
 * File:   newmain.c
 * Author: ahmet
 *
 * Created on 26 Temmuz 2021 Pazartesi, 13:43
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include <xc.h>




/*
 * 
 */
int main() {
    
    init_configbits();
    
    TRISBbits.TRISB4=0;
    PORTB=0x00;
    while(1){
        
        PORTBbits.RB4=1;
        __delay_ms(1000);
        PORTBbits.RB4=0;
        __delay_ms(1000);
        
        
    }

    return (EXIT_SUCCESS);
}


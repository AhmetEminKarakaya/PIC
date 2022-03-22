/* 
 * File:   main.c
 * Author: ahmet
 *
 * Created on 26 Temmuz 2021 Pazartesi, 16:17
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
  
    CMCON |=7;
    ADCON1 |=7;
    
    TRISAbits.TRISA0=1;
    TRISBbits.TRISB5=0;
   
     while(1){
        
         if(PORTAbits.RA0==1){
             PORTBbits.RB5=1;
         }
         else{
             PORTBbits.RB5=0;
         }     
    }
    

    return (EXIT_SUCCESS);
}


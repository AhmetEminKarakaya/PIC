/* 
 * File:   main.c
 * Author: ahmet
 *
 * Created on 26 Temmuz 2021 Pazartesi, 17:00
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include <xc.h>

#define SIZE 8

/*
 * 
 */
int main(int argc, char** argv) {
    
    TRISB=0x00;
    PORTB=0x00;
    
    int led=1;
    
    while(1){
        
        for(size_t i=0;i<SIZE;i++){
            PORTB=led;
            led=led<<1;
            __delay_ms(200);
            
        }
        
        for(size_t i=0;i<SIZE;i++){
            PORTB=led;
            led=led>>1;
            __delay_ms(200);
        }
        
        
    }
    

    return (EXIT_SUCCESS);
}


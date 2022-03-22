/* 
 * File:   main.c
 * Author: ahmet
 *
 * Created on 06 A?ustos 2021 Cuma, 14:44
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include <xc.h>

void __interrupt()timer2(){
    
    
    if(PIR1bits.TMR2IF){
        
        const int digit[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7C,0x07,0x7F,0x6F};
        static unsigned int counter=0;
        static unsigned int i=0;
        counter++;
        
        if(counter==500){
            PORTB=digit[i++];
            counter=0;
        }
        if(i==10){
            i=0;
        }
        
        TMR2=0;
        PIR1bits.TMR2IF=0;   
    }   
}



/*
 * 
 */
int main(int argc, char** argv) {

    init_configbits();
    
    T2CONbits.TMR2ON=1;
    T2CONbits.TOUTPS3=1;
    T2CONbits.TOUTPS2=0;
    T2CONbits.TOUTPS1=0;
    T2CONbits.TOUTPS0=1;
    T2CONbits.T2CKPS1=0;
    T2CONbits.T2CKPS0=0;
    
    INTCONbits.GIE=1;
    INTCONbits.PEIE=1;
    
    PIE1bits.TMR2IE=1;
    PIR1bits.TMR2IF=0;
    
    TRISB=0x00;
    PORTB=0x00;
    
    TMR2=0;
    PR2=200;
    
    while(1){
        
        
    }
    
    return (EXIT_SUCCESS);
}


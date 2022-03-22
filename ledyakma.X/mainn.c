/* 
 * File:   mainn.c
 * Author: ahmet
 *
 * Created on 26 Temmuz 2021 Pazartesi, 13:05
 */

#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include <xc.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    init_configbits();
    
    while(1){
        TRISB=0;
        TRISB=0;
        PORTB=0x00000001;
        
    }

    return (EXIT_SUCCESS);
}


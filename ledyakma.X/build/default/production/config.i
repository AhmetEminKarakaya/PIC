# 1 "config.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files/Microchip/MPLABX/v5.50/packs/Microchip/PIC16Fxxx_DFP/1.2.33/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "config.c" 2
# 1 "./config.h" 1
# 11 "./config.h"
void init_configbits();
# 1 "config.c" 2


void init_configbits(){

#pragma config FOSC=11
#pragma config WDTE=OFF
#pragma config PWRTE=OFF
#pragma config BOREN=OFF
#pragma config LVP=OFF
#pragma config CPD=OFF
#pragma config WRT=OFF
#pragma config CP=OFF

}

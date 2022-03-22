#include "interrupt.h"
#include <xc.h>


void ei_ex_rise(void){
    
    INTCONbits.GIE=1;
    INTCONbits.INTE=1;
    OPTION_REGbits.INTEDG=1;
    
    
    
}
void di_ex_fall(void){
    
    INTCONbits.GIE=1;
    INTCONbits.INTE=1;
    OPTION_REGbits.INTEDG=0;
}

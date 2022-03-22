#include "interrupt.h"
#include <xc.h>


void ei_portb(){
    
    INTCONbits.GIE=1;
    INTCONbits.RBIE=1;
    
    
}

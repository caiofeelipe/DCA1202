#include <stdio.h>

int main()
{
    /* x for declarado como char?
    como char só ocupa 1 byte, teremos:  x+1= 4093, x+2= 4094, x+3= 4095
    
    x for declarado como int?
    como int ocupa 2 byte, teremos:   x+1= 4094, x+2= 4096, x+3= 4098

    x for declarado como float?
    como float ocupa 4 byte, teremos: x+1= 4096, x+2= 4100, x+3= 4104
    
    x for declarado como double?
    como double ocupa 8 byte, teremos: x+1= 4100, x+2= 4108, x+3= 4116
       
    */
    return 0;
}

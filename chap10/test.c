#include <stdio.h>
int main(void)
{
    double rates[5] = {88.99, 100.22, 87.12, 99.21, 87.13};
    double * const  pc = rates;
    *pc = 89.21;
   
    printf("%lf ", *pc);
    
    printf("\n");
    return 0;
}
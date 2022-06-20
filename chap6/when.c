// when.c -- when a loop quits
#include <stdio.h>
int main(void)
{
    int n = 5;

    printf("n = %d\n", n);
    while (++n < 8)                    // line 7
    {
        
        printf("Now n = %d\n", n);   // line 10
    }
    printf("The loop has finished.\n");
    
    return 0;
}

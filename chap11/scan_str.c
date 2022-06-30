/* scan_str.c -- using scanf() */
#include <stdio.h>
int main(void)
{
    char name[2][15];
    int count;
    
    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name[0], name[1]);
    printf("I read the %d names %s and %s.\n",
           count, name[0], name[1]);
    
    return 0;
}

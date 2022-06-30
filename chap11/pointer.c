/* simulae game */
#include <stdio.h>
#include <string.h>

#define SLEN 40
#define LIM 5

int main(void)
{ 
    char * ADteam[LIM] = {
        "xia",
        "delaiwen",
        "kasha",
        "weien",
        "EZ"
    };

    for(int i = 0; i < LIM; i++)
    {
        printf("%-10s %p\n", *(ADteam+i), (ADteam+i));
    }

    return 0;
}
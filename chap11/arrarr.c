/* simulae game */
#include <stdio.h>
#include <string.h>

#define SLEN 40
#define LIM 5

int main(void)
{ 
    const char Shangdanteam[LIM][SLEN] = {
        "tianshi",
        "ruiwen",
        "luoshou",
        "jianmo",
        "eluoyi"
    };

    printf("%-10s %p %p\n", Shangdanteam, Shangdanteam, "tianshi");

    printf("%-10s %s %20s\n", "select", "address", "size_of");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    for(int i = 0; i < LIM; i++)
    {
        printf("%-10s %p %8d\n", Shangdanteam[i], Shangdanteam[i], sizeof(Shangdanteam[i]));
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    return 0;
}

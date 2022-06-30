#include <stdio.h>

int main(void)
{
    int line;
    int row;
    char inc;

    printf("input the alphabet %c \n", inc);
    scanf("%c",&inc);
    
    for(line = 'A'; line < inc; line++)
    {
        for(char ch = 'A', row = inc; row > 'A'; row--, ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int line = 0;
    int row;

    for(line; line < 5; line++)
    {
        for(row = 0; row < line+1; row++)
        {
            printf("%c", '$');
        }
        printf("\n");
    }
    return 0;
}
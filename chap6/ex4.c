#include <stdio.h>

int main(void)
{
    int line = 0;
    int row;
    char ch = 'A';
    
    for(line; line < 6; line++)
    {
        for(row = 0; row < line+1; row++, ch++)
        {
            printf("%c", ch);
    
        }
        printf("\n");
    }
    return 0;
}
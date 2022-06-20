#include <stdio.h>
/* &1 do while
int main(void)
{
    const int SIZE = 26;
    int i = 0;
    char str[SIZE];
    char ch = 'a';

    do{
        str[i] = ch;
        printf("%c ", str[i]);
        ch++;
        i++;
        
    }while(i != 26);
    printf("\n");
    return 0;
}
*/
/* & for 
int main(void)
{
    char ch;
    char str[26];
    int i = 0;

    for(ch = 'a', printf("%c ",str[i] = ch); i < 26, ch < 'z'; i++ )
    {
        str[i] = ++ch;
        printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}
*/
/* while */
int main(void)
{
    char ch = 'a';
    char str[26];
    int i = 0;

    while(ch <= 'z')
    {
        str[i] = ch;
        printf("%c ", str[i]);
        i++;
        ch++;
    }
    printf("\n");
    return 0;
}
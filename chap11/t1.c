/* quit_chk.c -- beginning of some program */
#include <stdio.h>
#include <string.h>
#define SIZE 10

char * strget(char * st, int n)
{
    int i = 0;
    
 /*   do{
        st[i] = getchar();
    }while (++i < n && st[i] != EOF);
*/
   for(i = 0; (i < n && st[i] != EOF); i++)
    {
        *st = getchar();
            st++;
    }

    return st;
}

int main(void)
{
    char str[SIZE];
    int num;
    
    printf("Enter the num which you will get\n");
    strget(str, SIZE);
    fputs(str, stdout);
  
    printf("\n");
    return 0;
}
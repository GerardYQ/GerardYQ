/*  fgets3.c  -- using fgets() */
#include <stdio.h>

#define STLEN 64

int main(void)
{
    char words[STLEN];
    int i;
    FILE *fp;

    if ((fp = fopen("file1", "r")) == NULL)
    {
        printf("cannot open th file!\n");
        return -1;
    }

    while (fgets(words, STLEN, fp) != NULL && words[1] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
            printf("i = %d\n", i);
        if (words[i] == '\n')
            words[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
        puts(words);    
    }
    puts("done");
    return 0;
}

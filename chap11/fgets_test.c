/*  fgets3.c  -- using fgets() */
#include <stdio.h>
#include <string.h>

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
        if (words[i] == '\n')
            words[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
        if (strncmp("VERSION_ID", words, strlen("VERSION_ID")) == 0)
        {
            puts(words);  
            break;
        }    
    }

    printf("strlen = %d sizeof = %d\n",strlen(words), sizeof("VERSION_ID=\"20.04\""));
    char *p = words;
    printf("%s \n", p+11);
    puts(&words[11]);    
    puts("done");

    return 0;
}

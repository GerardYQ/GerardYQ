#include <stdio.h>
#include <string.h>
#define SLEN 30
#define SIZE 10


static void cutstr(char * str, unsigned int size)
{
    if (strlen(str) > size)
        while(str[size] != '\0')
            str[size++] = '\0';
}   

int main(void)
{
    char str[SLEN] = "Go ahead ";
    char string[SIZE] = "Second si";
    char * stds = "Third, man";
    char strs[15] = "1define inter";
    /* strcpy */
    strcpy(str, "First delete");
    puts(str);
    cutstr(str, SIZE);
    /* strncpy */
    strncpy(str, string, 5);
    puts(str);
    cutstr(str, SIZE);
    /* strcat */
    strcat(str, stds);
    puts(str);
    cutstr(str, SIZE);
    /* strncat */
    strncat(str, strs, 7);
    puts(str);
    cutstr(str, SIZE);
    /* strcmp */
    if (strcmp(str, stds) == 0)
    {
        printf("su\n");
    }
    else {
        printf("fu\n");
    }
    /* strncmp */
    if (strncmp(str, stds, strlen(stds)) == 0)
    {
        printf("snu\n");
    }
    else {
        printf("fnu\n");
    }

    return 0;
}
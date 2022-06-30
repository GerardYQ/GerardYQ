#include <stdio.h>
#include <string.h>

#define SIZE 10

void cutstr(char * str, unsigned int size)
{
    if (strlen(str) > size)
        while(str[size] != '\0')
            str[size++] = '\0';
}   

int main(void)
{
    char str[] = "delete string";
    puts(str);
    cutstr(str, SIZE);
    puts(str);
    printf("%s %d\n", str, sizeof(str));
    puts(str+11);
    return 0;
}
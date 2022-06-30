#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    FILE *fp;

    char * strr = "dream is possible!";
    printf("%s\n", strcpy(str, strr));

    char line[60];
    char * find;
    fp = fopen("file1", "r");
    fgets(line, 60, fp);
    printf("%zd \n", strlen(line));
    find = strchr(line, '\n');
    if (find)
        *find = '\0';
    puts(line);
    printf("%zd \n", strlen(line));
    
    return 0;
}
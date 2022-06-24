#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main()
{
    FILE *ft;
    char sbuf[128];
    char command1[256] = "arecord ";
    char command2[256] = "cp ";

    memset(sbuf, 0x00, sizeof( sbuf));  
    sprintf(sbuf, "%s%s", getcwd(sbuf, sizeof(sbuf)-1), "/test.wav -d 3");
//    printf("sbuf:%s\n", sbuf);
    strcat(command1, sbuf);
    printf("command1: %s\n", command1);

    
    memset(sbuf, 0x00, sizeof( sbuf));
    sprintf(sbuf, "%s%s", getcwd(sbuf, sizeof(sbuf)-1), "/file");
    
    if((ft=fopen(sbuf,"r")) == NULL)
    {
        printf("cannot read the file\n");
    }else{
        memset(sbuf, 0x00, sizeof( sbuf));
        sprintf(sbuf, "%s%s", getcwd(sbuf, sizeof(sbuf)-1), "/test.wav /user/html");
        //    printf("sbuf:%s\n", sbuf);
        strcat(command2, sbuf);
        printf("command2: %s\n", command2);
        fclose(ft);
    }

    return 0;
}
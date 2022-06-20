/* stringf.c -- string formatting */
#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void)
{
    char name[40]={"alex"};
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
    printf("The NAME family just may be $%s dollars richer!\n", name);
    return 0;
}

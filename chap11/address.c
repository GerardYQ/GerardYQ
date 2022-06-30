#include "work.h"

//  addresses.c  -- addresses of strings
#define MSG "I'm special."

char address()
{
/*    char ar[] = MSG;
    const char *pt = MSG;
    char *pr = ar;
    
    printf("address of \"I'm special\": %p \n", "I'm special");
    printf("              address ar: %p\n", ar);
    printf("              address pt: %p\n", pt);
    printf("              address pr: %p\n", pr);
    printf("          address of MSG: %p\n", MSG);
    printf("address of \"I'm special\": %p \n", "I'm special");


    const char arr[] = "asada dsasd";
    const char *pc = arr;
    
    printf("~~~~ %c\n", *pc);

    for (int i = 0; i < strlen(arr)+1; i++)
    {
        printf("%c ", *pc++);
    }

    printf("\n"); 
    printf("~~~~ %c\n", *pc);
*/

    char * word = "frame";
    word[0] = '1';
    printf("frame");
    printf("%s", "frame");
    return 0;
}

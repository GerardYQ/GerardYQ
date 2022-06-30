#include "work.h"

char strptr()
{
    char m1[30] = "\"we are\"";
    char m3[30] = {'w', 'e', ' ', 'a', 'r', 'e','\0'};
    printf("m1 : %s\n", m1);
    printf("m3 : %s\n", m3);
    printf("%s, %p, %c\n", "Hansong", "zhihui", *"Gerard");
}
/* day_mon2.c -- letting the compiler count elements */
#include <stdio.h>
int main(void)
{
    const int days[] = {31,28,31,30,31,30,31,31,30,31};
    int index;

    printf("数组字节长：%zu , 单个元素字节长：%zu ,数组项数：%zu\n", sizeof(days), sizeof(days[0]), sizeof(days)/sizeof(days[0]));
    
    for (index = 0; index < sizeof days / sizeof days[0]; index++)
        printf("Month %2d has %d days.\n", index +1,
               days[index]);
    
    return 0;
}

#include <stdio.h>
#include "work.h"

int main(void)
{
    printf("Now work is:\n");
    address();
    return 0;
}


    printf("please pick out yourteam lengends\n");
    printf("\n~~~~~~~~~\n");
    scanf("%d%d%d%d%d",&pickAD, &pickShangdan, &pickZhongdan, &pickFuzhu, &pickDaye);
    printf("~~~~~~~~~\n\n");
    if(pickAD < 0 || pickAD > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        yourteam[0] = ADteam[pickAD];
        printf("yourteam AD is %-15s\n", yourteam[0]);
    }

    if(pickShangdan < 0 || pickShangdan > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        yourteam[1] = Shangdanteam[pickShangdan];
        printf("yourteam Shangdan is %-15s\n", yourteam[1]);
    }

    if(pickZhongdan < 0 || pickZhongdan > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        yourteam[2] = Zhongdanteam[pickZhongdan];
        printf("yourteam Zhongdan is %-15s\n", yourteam[2]);
    }


    if(pickFuzhu < 0 || pickFuzhu > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        yourteam[3] = Fuzhuteam[pickFuzhu];
        printf("yourteam Fuzhu is %-15s\n", yourteam[3]);
    }

    if(pickDaye < 0 || pickDaye > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        yourteam[4] = Dayeteam[pickDaye];
        printf("yourteam Daye is %-15s\n", yourteam[4]);
    }

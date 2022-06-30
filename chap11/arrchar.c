/* simulae game */
#include <stdio.h>
#include <string.h>

#define SLEN 40
#define LIM 5

int main(void)
{ 
    const char ADteam[LIM][SLEN] = {
        "xia",
        "delaiwen",
        "kasha",
        "weien",
        "EZ"
    };
    const char Shangdanteam[LIM][SLEN] = {
        "tianshi",
        "ruiwen",
        "luoshou",
        "jianmo",
        "eluoyi"
    };
    const char Zhongdanteam[LIM][SLEN] = {
        "jie",
        "yasuo",
        "daomei",
        "kapai",
        "aike"
    };
    const char Fuzhuteam[LIM][SLEN] = {
        "taitan",
        "lakesi",
        "namei",
        "chuishi",
        "jiqiren"
    };
    const char Dayeteam[LIM][SLEN] = {
        "huangzi",
        "mangseng",
        "jiansheng",
        "manzi",
        "pobaizhiwang"
    };

    char myteam[LIM][SLEN] = {};
    char yourteam[LIM][SLEN] = {};

    int i;
    int pickAD;
    int pickShangdan;
    int pickZhongdan;
    int pickFuzhu;
    int pickDaye;

    puts("Welcome to League of Legends!");

    printf("please pick out myteam lengends\n");
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
        sprintf(myteam[0], "%s", ADteam[pickAD]); 
        printf("myteam AD is %-15s\n", myteam[0]);
    }

    if(pickShangdan < 0 || pickShangdan > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        sprintf(myteam[1], "%s", Shangdanteam[pickShangdan]); 
        printf("myteam Shangdan is %-15s\n", myteam[1]);
    }

    if(pickZhongdan < 0 || pickZhongdan > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        sprintf(myteam[2], "%s", Zhongdanteam[pickZhongdan]); 
        printf("myteam Zhongdan is %-15s\n", myteam[2]);
    }


    if(pickFuzhu < 0 || pickFuzhu > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        sprintf(myteam[3], "%s", Fuzhuteam[pickFuzhu]); 
        printf("myteam Fuzhu is %-15s\n", myteam[3]);
    }

    if(pickDaye < 0 || pickDaye > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        sprintf(myteam[4], "%s", Dayeteam[pickDaye]); 
        printf("myteam Daye is %-15s\n", myteam[4]);
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
        sprintf(yourteam[0], "%s", ADteam[pickAD]); 
        printf("yourteam AD is %-15s\n", yourteam[0]);
    }

    if(pickShangdan < 0 || pickShangdan > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        sprintf(yourteam[1], "%s", Shangdanteam[pickShangdan]); 
        printf("yourteam Shangdan is %-15s\n", yourteam[1]);
    }

    if(pickZhongdan < 0 || pickZhongdan > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        sprintf(yourteam[2], "%s", Zhongdanteam[pickZhongdan]); 
        printf("yourteam Zhongdan is %-15s\n", yourteam[2]);
    }


    if(pickFuzhu < 0 || pickFuzhu > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        sprintf(yourteam[3], "%s", Fuzhuteam[pickFuzhu]); 
        printf("yourteam Fuzhu is %-15s\n", yourteam[3]);
    }

    if(pickDaye < 0 || pickDaye > 4)
    {
        printf("select error!\n");
        return -1;
    }
    else
    {
        sprintf(yourteam[4], "%s", Dayeteam[pickDaye]); 
        printf("yourteam Daye is %-15s\n", yourteam[4]);
    }

    printf("%-36s %-25s\n", "My Teams", "Your Teams");
    for(i = 0; i < LIM; i++)
    {
        if(strlen(myteam[i]) > strlen(yourteam[i]))
        {
            printf("%-10s win\n", myteam[i]);
        }
        else
        {
            printf("%41s win\n", yourteam[i]);
        }
    }

    return 0;
}
/* simulae game */
#include <stdio.h>
#include <string.h>

#define SLEN 40
#define LIM 5

int main(void)
{ 
    char *const ADteam[LIM] = {
        "xia",
        "delaiwen",
        "kasha",
        "weien",
        "EZ"
    };
    char *const Shangdanteam[LIM] = {
        "tianshi",
        "ruiwen",
        "luoshou",
        "jianmo",
        "eluoyi"
    };
    char *const Zhongdanteam[LIM] = {
        "jie",
        "yasuo",
        "daomei",
        "kapai",
        "aike"
    };
    char *const Fuzhuteam[LIM] = {
        "taitan",
        "lakesi",
        "namei",
        "chuishi",
        "jiqiren"
    };
    char *const Dayeteam[LIM] = {
        "huangzi",
        "mangseng",
        "jiansheng",
        "manzi",
        "pobaizhiwang"
    };

    char * myteam[LIM] = {};
    char * yourteam[LIM] = {};

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
        myteam[0] = ADteam[pickAD];
        printf("myteam AD is %-15s\n", myteam[0]);
    }

    if(pickShangdan < 0 || pickShangdan > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        myteam[1] = Shangdanteam[pickShangdan];
        printf("myteam Shangdan is %-15s\n", myteam[1]);
    }

    if(pickZhongdan < 0 || pickZhongdan > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        myteam[2] = Zhongdanteam[pickZhongdan];
        printf("myteam Zhongdan is %-15s\n", myteam[2]);
    }


    if(pickFuzhu < 0 || pickFuzhu > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        myteam[3] = Fuzhuteam[pickFuzhu];
        printf("myteam Fuzhu is %-15s\n", myteam[3]);
    }

    if(pickDaye < 0 || pickDaye > 4)
    {
        printf("select error!");
        return -1;
    }
    else
    {
        myteam[4] = Dayeteam[pickDaye];
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

    return 0;
}
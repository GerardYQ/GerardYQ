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
    int pick[5];

    puts("Welcome to League of Legends!");

    printf("please pick out myteam lengends\n");

    for(i = 0; i < LIM; i++)
    {
        scanf("%d", &pick[i]);
        if(pick[i] < 0 || pick[i] > 4)
        {
            printf("select error!\n");
            return -1;
        }
        else if(i == 0)
        {
            myteam[i] = ADteam[pick[i]];
            printf("myteam AD is %-15s\n", myteam[i]);
        }
        else if(i == 1)
        {
            myteam[i] = Shangdanteam[pick[i]];
            printf("myteam shangdan is %-15s\n", myteam[i]);
        }
        else if(i == 2)
        {
            myteam[i] = Zhongdanteam[pick[i]];
            printf("myteam Zhongdan is %-15s\n", myteam[i]);
        }
        else if(i == 3)
        {
            myteam[i] = Fuzhuteam[pick[i]];
            printf("myteam Fuzhu is %-15s\n", myteam[i]);
        }
        else
        {
            myteam[i] = Dayeteam[pick[i]];
            printf("myteam Daye is %-15s\n", myteam[i]);
        }
    }

    return 0;
}
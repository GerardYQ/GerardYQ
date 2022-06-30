#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdeaf";
	char arr2[] = "bc";
    char * str = "deg";
    char * ptr = strchr(arr1, 'c');
    char * psr = strrchr(arr1, 'a');
    char * ret = strstr(arr1, arr2);
    char * rot = strpbrk(arr1, str);
    /* strstr */
    if (ptr == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", ptr);
	}
    /* strrchr */
    if (psr == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", psr);
	}
    /* strstr */
    if (ret == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
    /* strpbrk */
    if (rot == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", rot);
	}

	return 0;
}
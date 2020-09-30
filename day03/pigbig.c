#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
	int a, b, c;
	printf("请输入三只小猪的体重:\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("小猪A最重!\n");
		}
		else
		{
			printf("小猪C最重!\n");
		}
	}
	else
	{
		if(b>c)
		{
			printf("小猪B最重!\n");
		}
		else
		{
			printf("小猪C最重!\n");
		}
	}
	return EXIT_SUCCESS;
}

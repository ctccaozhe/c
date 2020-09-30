#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
	int score;
	scanf("%d", &score);
	if(score > 700)
	{
		printf("我要上清华!\n");
		if(score > 720)
		{
			printf("我要学计算机!\n");
		}
		else if(score > 710)
		{
			printf("我要学挖掘机!\n");
		}
		else
		{
			printf("我要学盗墓!\n");
		}
	}
	else if(score > 600)
	{
		printf("我要上北大!\n");
	}
	else
	{
		printf("我要上传智!\n");
	}
	return EXIT_SUCCESS;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX(a,b) (a)>(b)?(a):(b)

int main()
{
	int a = 10;
	int b = 20;
	printf("最大值为%d\n", MAX(a,b));

	return EXIT_SUCCESS;
}

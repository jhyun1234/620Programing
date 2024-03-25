#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);

	if (num % 4 == 0)
	{
		for(int i=0; i<num; )
		printf("long");
		
	}
	else
	{

	}
	printf("int");
	return 0;
}
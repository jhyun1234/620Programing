#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int H,M;

	scanf("%d %d", &H,&M);

	if(H>12 && M>60)
	{
		
		printf("%d %d", H+1, M-45);
	}
	else if(H>=12 && M>=59)
	{
		printf("%d %d", H, M);
	}
	else
	{
		printf("%d %d", H, M);
	}
	return 0;
}
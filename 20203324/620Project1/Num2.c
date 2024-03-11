#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	int a, b, c,d;

	scanf("%d", &a);
	scanf("%d %d %d", &b, &c, &d);

	printf("%d\n", a * b);
	printf("%d\n", a * c);
	printf("%d\n", a * d);

	int e = a * b;
	int f = a * c;
	int g = a * d;
	int h = e + f + g;
	printf("%d\n", h);
	

	
	


	return 0;
}
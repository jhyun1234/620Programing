#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//fabs(a - b) < 0.0001 �Ǽ��� ���ԵǾ����� ��
int main()
{
	unsigned char a = 1;
	char b = -1;
	printf("a<<1 = %X\n", a << 1);
	printf("b>>1 = %X\n", b >> 1);


	return 0;
}
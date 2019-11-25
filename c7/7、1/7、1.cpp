// 7、1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int cd(int a, int b);
int cm(int a, int b, int c);

int main(int argc, char* argv[])
{
	int a, b, c,d;
	scanf("%d%d", &a, &b);
	c = cd(a,b);
	d = cm(a, b, c);
	return 0;

}


int cd(int a, int b)
{
	int c;
	while (c = a % b, c != 0) {
		a = b;
		b = c;
	}
	printf("最大公约数为：%d\n", b);
	return(b);

}


int cm(int a, int b, int c)
{
	int t = a * b, m;
	m = t / c;
	printf("最小公倍数为：%d\n", m);
	return 0;
	


}
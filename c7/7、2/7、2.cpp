// 7、2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

void v1();
int v2(double a, double b);
int v3(double a, double b, double t);

int main()
{
	double a, b, c;
	double t;
	scanf("%lf%lf%lf", &a, &b, &c);
	t = b * b - 4 * a * c;
	if (t < 0)
		v1();
	else if (t == 0)
		v2(a, b);

	else  
		v3(a,b,t);

	return 0;


}


void v1()  //t<0
{
	printf("该方程无解\n");
	
}

int v2(double a, double b)  //t=0
{
	double x;
	x = -b / (2 * a);
	printf("x1=x2=%lf\n", x);
	return 0;
}

int v3(double a, double b, double t)  //t>0
{
	double x1, x2;
	x1 = (-b + sqrt(t)) / (2 * a);
	x2 = (-b - sqrt(t)) / (2 * a);
	printf("x1=%f,x2=%lf\n", x1, x2);
	return 0;
}



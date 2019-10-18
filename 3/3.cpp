// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main()
{
	int d=300000,p=6000;
	double r=0.01,m;
	m=(log(p)-log(p-d*r))/log(1+r);
	printf("m=%lf.1",m);
	return 0;
}
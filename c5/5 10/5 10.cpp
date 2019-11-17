// 5 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i=1,t;
	double x,sum,n=2,m=1;
	for(i=1;i<=20;i++)
	{
		x=n/m;
		sum=x+sum;
		t=n;
		n=m+n;
		m=t;
	}
	printf("%f",sum);
	return 0;
}


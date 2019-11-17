// 5 13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
		double x1,x2;
	double a;
	scanf("%lf",&a);
	x2=1.0;
	while(1)
	{
		x1=x2;	
		x2=(x1+a/x1)/2.0;
		if(fabs(x1-x2)<0.00001)
		{
			printf("%f",x2);
			break;
		}
	}

	return 0;
}


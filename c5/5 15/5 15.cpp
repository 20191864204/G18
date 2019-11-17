// 5 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float x1=-10,x2=10,y=1,x;
	while(fabs(y)>10e-6)
	{
		x=(x1+x2)/2;
		y=2*x*x*x-4*x*x+3*x-6;
		
	{	if(y>0)
		x2=x;
		else
		x1=x;}
		} 
	printf("%lf",x);
	return 0;
}


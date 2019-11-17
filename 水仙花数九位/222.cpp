// 222.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int n,a,b,c,d,e,f,g,h,j;
	int i=100000000;
	for(;i<=999999999;i++)
	{
	a=i/100000000;
	b=i/10000000%10;
	c=i/1000000%10;
	d=i/100000%10;
	e=i/10000%10;
	f=i/1000%10;
	g=i/100%10;
	h=i/10%10; 
	j=i%10;
	
	if(i==a*a*a*a*a*a*a*a*a+b*
	b*b*b*b*b*b*b*b+c*c*c*c*c*c*c*c*c+
	d*d*d*d*d*d*d*d*d+e*e*e*e*e*e*e*e*e+
	f*f*f*f*f*f*f*f*f+g*g*g*g*g*g*g*g*g+
	h*h*h*h*h*h*h*h*h+j*j*j*j*j*j*j*j*j)
	printf("%d ",i);}
	return 0;
}


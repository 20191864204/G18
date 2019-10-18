// 2 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main()
{
	float p0=1000,r0=0.015,r1=0.03,r2=0.021,r3=0.0275,r4=0.0035,p1,p2,p3,p4,p5;
	p1=p0*(1+r1*5);
	p2=p0*(1+r2*2)*(1+r3*3);
	p3=p0*(1+r3*3)*(1+r2*2);
	p4=p0*pow((1+r0),5);
	p5=p0*pow(1+r4/4,4*5);

	printf("p1=%f\n,p2=%f\n,p3=%f\n,p4=%f\n,p5=%f\n",p1,p2,p3,p4,p5);
	return 0;

}
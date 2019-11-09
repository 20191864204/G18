// 4dian10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	 
	double I,m;
	printf("当月利润为:\n");
	scanf("%d",&I);
	if (I<=100000)
		m=I*0.1;
	else if (I>100000 && I<=200000)
		m=(I-100000)*0.075+10000;
	else if (I>200000 && I<=400000)
		m=(I-200000)*0.05+17500;
	else if (I>400000 && I<=600000)
		m=(I-400000)*0.03+27500;
	else if (I>600000 && I<=1000000)
		m=(I-600000)*0.015+33500;
	else 
		m=(I-1000000)*0.01+39500;

	printf("利润为:%d,\n",m);

	return 0;
}


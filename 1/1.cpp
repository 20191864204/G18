// 1.cpp : Defines the entry point for the console application.
//
#include"stdafx.h"
#include<math.h>

int main()
{
	int  i=10;
	double r=0.07,p;
	p=pow((1+r),i);


	printf("十年后与现在相比的倍数：%1f\n",p);
	return 0;
}


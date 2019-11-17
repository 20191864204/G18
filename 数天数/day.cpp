// day.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i;

	int day,mon,year;

	int sum=0;

	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	printf("请输入日期:");
	scanf("%d%d%d",&year,&mon,&day);
	if((year%4==0)||(year%400==0)&&(year%100!=0))
	{
		month[2]=29;
	}
	for(i=0;i<mon-1;i++)
		sum=sum+month[i];
		sum=sum+day;
		printf("该日期是该年的%d天数为：",sum);

	return 0;
}


// 14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int a;
	printf("请输入该同学的成绩:\n");
	scanf("%d",&a);
	if(a<0 || a>100){
	printf("输入的数据不合规范,请重新输入\n");
	}
	else{
		if(a>90)
		{printf("该同学的成绩为A\n");}
	 if(a>=80 && a<=90)
	 {printf("该同学的等级为:B");}
    if(a>=70 && a<=79)
	{printf("该同学的等级为:C");}
    if(a>=60 && a<=69)
	{printf("该同学的等级为:D");}
    if(a>=0 && a<=59)
	{printf("该同学的等级为:E");}
	}


	return 0;
}


// 14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int a;
	printf("�������ͬѧ�ĳɼ�:\n");
	scanf("%d",&a);
	if(a<0 || a>100){
	printf("��������ݲ��Ϲ淶,����������\n");
	}
	else{
		if(a>90)
		{printf("��ͬѧ�ĳɼ�ΪA\n");}
	 if(a>=80 && a<=90)
	 {printf("��ͬѧ�ĵȼ�Ϊ:B");}
    if(a>=70 && a<=79)
	{printf("��ͬѧ�ĵȼ�Ϊ:C");}
    if(a>=60 && a<=69)
	{printf("��ͬѧ�ĵȼ�Ϊ:D");}
    if(a>=0 && a<=59)
	{printf("��ͬѧ�ĵȼ�Ϊ:E");}
	}


	return 0;
}


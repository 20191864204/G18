// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int a[10],i,j,n;
	printf("����10������"); 
	for(i=1;i<=10;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=10;i++)
	for(j=i;j<=10;j++) 
	{
		if(a[i]>a[j])
		{
			n=a[i];
			a[i]=a[j];
			a[j]=n;
		}
	}
	printf("ʮ������С�����˳������Ϊ�� ");
	for(i=1;i<=10;i++)
	printf("%2d",a[i]);
	return 0;
}


// 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()

{
	int a,b,c,z;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) z=a;
	else z=b;
	if(b>c) z=b;
	else z=c;
printf("max=%d",z);

	return 0;
}


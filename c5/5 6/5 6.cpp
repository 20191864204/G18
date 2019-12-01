// 5 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i=1,n=1;
    sum1=1,sum2=0;
	for(i=1;i<=20;i++){
	 
	sum1=i*sum1;
	sum2=sum1+sum2;
}
	
	printf("%ld\n",sum2);
	return 0;
}


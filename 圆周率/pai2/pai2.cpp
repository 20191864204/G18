// pai2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<time.h>

int main(int argc, char* argv[])
{	float a=2,b=1;
	double num=1;
	int i;
	long t1,t2;

	t1=clock();

	for(i=1;i<=100;i++){
		num*=a/b;
		if(i%2==0)
			a+=2;
		else
			b+=2;
	}
	num*=2;
	t2=clock();

	
	printf("pai=%.16lf\n",num);
	printf("¹²ÓÃÊ±%fÃë \n",(t2-t1)/1000.0);
	

	
	

	return 0;
}


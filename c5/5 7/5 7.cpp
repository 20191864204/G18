// 5 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
double k,s1=0,s2=0,s3=0,sum;	
		for(k=1;k<=100;k++){
			s1+=k;
		
		}
		for(k=1;k<=50;k++){
			s2=s2+k*k;
	
		}
		for(k=1;k<=10;k++){
			s3=s3+1/k;
		
		}
		sum=s1+s2+s3;

		printf("sum=%10.8f\n",sum);
		return 0;
}


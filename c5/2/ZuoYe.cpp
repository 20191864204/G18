// ZuoYe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>

void s1();

int main(int argc, char* argv[])
{
	int sign =1,count=0;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=1e-6)
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		count++;
	}	
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("ѭ������Ϊ:%d\n",count);
	return 0;
}

void s1 ()
{
	int sign =1,count=0;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=1e-8)
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		count++;
	}	
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("ѭ������Ϊ:%d\n",count);

}

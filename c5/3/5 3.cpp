// 5 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{  int a,b,num1,num2,t;
   printf("enter two number:\n",num1,num2);
	scanf("%d%d",&num1,&num2);
	if (num1>num2){
		t=num2;
		num2=num1;
		num1=t;
	}
	    a=num1;
		b=num2;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;

	}
		
	printf("zuidagongyueshu: %d\n",a); 
	printf("zuixiaogongbeishu: %d\n",num1*num2/a);
	return 0;
}


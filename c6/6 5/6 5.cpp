// 6 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{	int i,temp,n=5;
	int a[5]={8,6,5,4,1};

	for(i=0;i<(n/2);i++){
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
		for(i=0;i<n;i++){
		printf("% d",a[i]);

	
	
	}


	

	printf("\n");
	return 0;
}


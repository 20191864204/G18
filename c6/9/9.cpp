// 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int n[15]={99,93,86,83,65,63,59,51,44,38,36,34,27,25,18};
	int num,low,high,mid;
	for(low=0,high=14,printf("input number: "),scanf("%d",&num);low<=high;){
		mid=(low+high)/2;
		if(num>n[mid])
			high=mid-1;
		else if(num<n[mid])
			low=mid+1;
		else{
			printf("%d is NO.%d number\n",num,mid+1);
			break;
		}
	}
	if(num!=n[mid])
		printf("no such number\n");

	return 0;
}


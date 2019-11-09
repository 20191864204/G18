// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
 {
	int a,n,i,sum=0,item=0;
	printf("«Î ‰»Îa∫Õn:\n");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++){
		item=item*10+a;
		sum+=item;
	}
	printf("%d\n",sum);
	
}


// 47.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
 int x,y;
    printf("enter x:",x);
	scanf("%d",&x);
	y=0;
	if(x>=0)
		if(x>0)y=1;
	else y=-1;
	printf("x=%d,y=%d\n",x,y);
	return 0;
}


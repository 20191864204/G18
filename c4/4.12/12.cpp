// 12.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>

int main(int argc, char* argv[])
{
	int x1=2,y1=2,x2=-2,y2=2,x3=2,y3=-2,x4=-2,y4=-2;
	int m,n,d1,d2,d3,d4;
	printf("输入一个点的坐标(x,y)\n");
	scanf("%d%d",&m,&n);
	d1=(m-x1)*(m-x1)+(n-y1)*(n-y1);
	d2=(m-x2)*(m-x2)+(n-y2)*(n-y2);
	d3=(m-x3)*(m-x3)+(n-y3)+(n-y3);
	d4=(m-x4)*(m-x4)+(n-y4)*(n-y4);
	if (d1>1&&d2>1&&d3>1&&d4>1)
		printf("该点的高度为0");
	else printf("该点的高度为10");
}


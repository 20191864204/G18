// 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[10][10],i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(j==0)
				a[i][j]=1;
			else if(j>i)
			{
				a[i][j]=0;
				break;
			}
		
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			if(a[i][j]!=0)
				printf("%5d",a[i][j]);
		}
			printf(" \n");
	}
		return 0;
}




// 8.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>

int main(int argc, char* argv[])
{
	float a[3][4],min[3];
	int i,j;
	printf(" a[3][4]:\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++){
			scanf("%f",&a[i][j]);
		}
		min[0]=a[0][0];
		for(i=0;i<3;i++)
			for(j=0;j<4;j++)
				if(min[0]>a[i][j]){
					min[0]=a[i][j];
					min[1]=i+1;
					min[2]=j+1;
				}
				printf("min:%.2f\n line:%.2f\n row:%.2f\n",min[0],min[1],min[2]);
				return 0;
}


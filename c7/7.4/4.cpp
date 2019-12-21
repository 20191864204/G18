// 4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
void transpo(int x[3][3]);                                 
int main()
{
    int a[3][3];
    int i,j;
     for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
		{
            scanf("%d", &a[i][j]);
        }
    transpo(a);                                           
    return 0;
}

void transpo(int x[3][3])
{
    int i, j, k, m[3][3];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            m[j][i] = x[i][j];
   for(i=0; i<3; i++)
   {
        for(j=0; j<3; j++)
		{
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    
}

// 3.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include<math.h>
int sushu(int a)
{
    int i,k=sqrt(a);
    for(i=2;i<=k+1;i++)
    if(a%i==0)break;
    if(i<k+1) return 0;
    else return 1;
}
main()
{
    int a,b;
    printf("������һ��������\n");
    scanf("%d",&a);
    b=sushu(a);
    if(b) printf("%d��һ������\n",a);
    else printf("%d����һ������\n",a);
}

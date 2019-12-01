// 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
char f(char a1,char b1);
char a1[100];
int b1[4];
{
    int j;
    for (j=0;a1[j]!='\0';j++) 
    {
    if(a1[j]>=65&&a1[j]<=90||a1[j]>=97&&a1[j]<=122) b1[0]++;
       else if(a1[j]>=48&&a1[j]<=57) b1[1]++;
          else if(a1[j]==32) b1[2]++; 
             else b1[3]++;
    }
}
void main()
{
    char a[100];
    static int i,b[4];
    gets(a);
    f(a,b);
    printf("zimu   shuzi   space   other\n");
    for (i=0;i<4;i++)
        printf("%-8d",b[i]);
}
// 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{


char s1[10],s2[10];
    int i;
    printf("����s2�ַ���:\n");
    gets(s2);
    for(i=0;s1[i]=s2[i];i++);
    printf("s2�ַ��������\n");
    printf("%s",s1);
	return 0;
}


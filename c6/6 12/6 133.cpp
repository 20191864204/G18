// 6 133.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>

int main(int argc, char* argv[])
{	
    char a[11],b[11];
    int i;
    printf("����һ�е��ģ�\n");
    gets(a);
    for(i=0;a[i]!='\0';i++) {
        if('A'<=a[i]&&a[i]<='Z') b[i]=155-a[i]; //'A'+'Z'=155 
        else if('a'<=a[i]&&a[i]<='z') b[i]=219-a[i]; //'a'+'z'=219
        else b[i]=a[i];
    }
    b[i]=0;
    printf("ԭ����Ϊ��\n");
    puts(a);
    printf("���뷭���ԭ��Ϊ��\n");
    puts(b);

	printf("Hello World!\n");
	return 0;
}



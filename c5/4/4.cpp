// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c;
	int letters=0,spaces=0,digits=0,others=0;
	printf("������һ��������ַ�:");
	while((c=getchar())!='\n')
	{
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
		letters++;
	else if(c>='0' && c<='9')
		digits++;
	else if(c==' ')
		spaces++;
	else 
		others++;

	}
	printf("��ĸ��%d��\n������%d��\n�ո���%d��\n������%d��\n",letters,digits,spaces,others);
	return 0;
}


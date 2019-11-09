// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c;
	int letters=0,spaces=0,digits=0,others=0;
	printf("请输入一串任意的字符:");
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
	printf("字母有%d个\n数字有%d个\n空格有%d个\n其他有%d个\n",letters,digits,spaces,others);
	return 0;
}


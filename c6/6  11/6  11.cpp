// 6  11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{	

    char str[]={"*****"};
    int i,j;
	char c=32;  //32:space
    for(i=1;i<=5;i++)
    {
        printf("%s\n",str);
        for(j=1;j<=i;j++)
        {
            
            printf("%c",c);
        }
		

    }
	
	


	return 0;
}


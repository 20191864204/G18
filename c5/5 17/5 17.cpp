// 5 17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char i,j,k;					
	for(i = 'X';i <= 'Z';i++)		
	{
		for(j = 'X';j <='Z';j++)
		{
			if(i != j)			
			{
				for(k = 'X';k <='Z';k++)
				{
					if(k != i && k != j)	
					{
						if(i != 'X' && k != 'X' && k != 'Z')
						{
							printf("A VS %c \n",i);
							printf("B VS %c \n",j);
							printf("C VS %c \n",k);
						}
					} 					
				}
			} 			
		}
	}	
	return 0;
}


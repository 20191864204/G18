// pi1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	#include<stdio.h>
#include<math.h>
int main()
{
	int count = 0;
	double pi = 2.0, n = sqrt(2), term = 2.0 / sqrt(2);
	

	while (count<=15) {

		count++;
		pi = pi * term;
		n = sqrt(2 + n);
		term = 2.0/ n;
		printf("%f\n",pi);
		

		
	}
	
	printf("pi=%10.8f\n", pi);

	return 0;
}

}


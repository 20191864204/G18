// pi3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int count = 0;
	double pi = 1.0, n = 3.0, term = 1.0 / 3.0, j = 1.0;


	while (term >= 1e-6) {
		pi = pi + term;
		n = n + 2;
		j++;
		term = term * (j / n);

		
	}
	pi = 2 * pi;
	printf("pi=%10.8f\n", pi);

	return 0;
}


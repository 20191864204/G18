#include<stdio.h>

int v1(int n,int x);

int main()
{
	double P;
	int x, n;
	printf("������n��x��");
	scanf("%d,%d", &n, &x);
	P = v1(n, x);
	printf("%lf", P);
	return 0;
}

int v1(int n, int x)
{
	if (n == 0)
		return 1;

	else if (n == 1)
		return x;

	else
		return (((2 * n - 1) * x - v1(n - 1, x) - (n - 1) * v1(n - 2, x)) / n);

}


#include <stdio.h>
int main()
{
    double PI=acos(-1.0);
    double r=1.5,h=3.0,c,s,bs,bv,v;
	c=2*PI*r;
	s=PI*r*r;
	bs=4*PI*r*r;
	bv=4*PI*r*r/3;
	v=s*h;
	printf("Բ���ܳ� = %.2lf\n",c);
	printf("Բ����� = %.2lf\n",s);
	printf("Բ������ = %.2lf\n",bs);
    printf("Բ����� = %.2lf\n",bv);
	printf("Բ����� = %.2lf\n",v);
	return 0;
}


    
#include <stdio.h>
void lianjie(char a[],char b[])
{
	char c[40];
	int i,j;
	for(i=0;a[i]!='\0';i++)
		c[i]=a[i];
	for(j=0;b[j]!='\0';j++)
		c[i+j+1]='\0';
	printf("���Ӻ�:\n");
	puts(c);
}
main()
{
	char a[10],b[10];
	printf("����:\n");
	gets(a);
	gets(b);
	lianjie(a,b);
}
// 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main()
{int a,b;                                      
  printf("������һ��С��%d������a:");
  scanf("%d",&a);
  if (a>1000) 
  {printf("�������������Ҫ������������һ��С��1000������a:\n");
   scanf("%d",&a);
  }
  b=sqrt(a);
  printf("%d��ƽ���������������ǣ�%d\n",a,b);
  return 0;
}


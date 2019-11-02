// 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main()
{int a,b;                                      
  printf("请输入一个小于%d的整数a:");
  scanf("%d",&a);
  if (a>1000) 
  {printf("输入的数不符合要求，请重新输入一个小于1000的整数a:\n");
   scanf("%d",&a);
  }
  b=sqrt(a);
  printf("%d的平方根的整数部分是：%d\n",a,b);
  return 0;
}


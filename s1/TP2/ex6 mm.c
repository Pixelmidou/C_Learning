#include<stdio.h>
void main()
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("la nouvelle a est%d et la nouvelle b est %d",a,b);
}

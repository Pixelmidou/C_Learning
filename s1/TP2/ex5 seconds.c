#include <stdio.h>

void main()
{
  int a;
  int h;
  int m;
  int s;
  scanf("%d",&a );
  h=a/3600;
  m=(a%3600)/60;
  s=m%60;

  printf("il comporte %d h et%d m et %d s",h,m,s);
}

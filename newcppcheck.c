#include<stdio.h>
void main()
{
 int n;
 printf("enter any number\n");
 scanf("%d",&n);
 printf("%d",DecimalConvert(n));
 }
 int DecimalConvert(int n)
 {
 int dec=0,i=1;
 while(n!=0)
 {
  int rem=n%10;
  n=n/10;
  dec=dec+(rem*i);
  i=i*10;
  }
  return dec;
  }

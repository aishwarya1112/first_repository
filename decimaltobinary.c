#include<stdio.h>
void main()
{
 int n;
 printf("enter any number\n");
 scanf("%d",&n);
 printf("%d",BinaryConvert(n));
 }
 int BinaryConvert(int n)
 {
 int rem,bin=0,i=1;
 while(n!=0)
 {
  rem=n%2;
  n=n/2;
  bin=bin+(rem*i);
  i=i*10;
  }
  return bin;
  }

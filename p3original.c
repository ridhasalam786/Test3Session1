#include <stdio.h>

int fact(int);

void input(int *n,int *r)
{
  printf("Enter values of n: \t");
  scanf("%d",n);
  printf("Enter values of r: \t");
  scanf("%d",r);
}

int ncr(int n,int r)
{
  int result;    
  result=fact(n)/(fact(r)*fact(n-r));
  return result;
}

int fact(int x)
{
  int f=1;
  for(int i=x;i>0;i--)
    f=f*i;
  return f;
}

void output(int n,int r,int result)
{
  printf("Given n=%d & r=%d, nCr=%d",n,r,result);  
}

int main()
{
  int n,r,nCr;
  input(&n,&r);
  nCr=ncr(n,r);
  output(n,r,nCr);
  return 0;
}
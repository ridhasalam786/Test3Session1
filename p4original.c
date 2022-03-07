#include <stdio.h>

int input_degree()
{
  int n;
  printf ("Enter the degree: \t");
  scanf ("%d",&n);
  return n;
}

float input_x()
{
  float x;
  printf ("Enter the value of x: \t");
  scanf ("%f",&x);
  return x;
}

void input_coefficients(int n,float c[n])
{
  printf ("Enter the coefficients: \t");
  for(int i=0;i<=x;i++)
    scanf ("%f",&c[i]);
}

float polynomial(int n,float c[n],float x)
{
  float result=a[0];
  for(int i=1;i<n;i++)
    result=result*x+a[i];
  return result;
}

void output(int n,float c[n],float x,float result)
{
  printf("Degree=%d,X=%f \n  Coefficients=%f \n  Result=%f \n",n,x,c[x],result);
}


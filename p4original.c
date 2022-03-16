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

void input_coefficients(int n,float c[n+1])
{
  printf ("Enter the coefficients: \t");
  for(int i=0;i<=n+1;i++)
    scanf ("%f",&c[i]);
}

float evaluate_polynomial(int n,float c[n+1],float x)
{
  float result=c[n]*x;
  for(int i=n-1;i>=1;i--)
    result=(result+c[i])*x;
  result=result+c[0];
  return result;
}

void output(int n,float c[n+1],float x,float result)
{
  printf("Degree=%d \n X value=%f \n Result=%f \n",n,x,result);
  printf("Coefficients= \t");
  for(int i=0;i<=n+1;i++)
    printf("%d \t",c[i]);
  printf("Result= \t",result);
}

int main()
{
  int n;
  n=input_degree();
  float x;
  x=input_x();
  float a[n+1];
  input_coefficients(n,a[n+1]);
  float r;
  r=evaluate_polynomial(n,a[n+1],x);
  output(n,a[n+1],x,r);
  return 0;
}

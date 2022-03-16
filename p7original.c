#include <stdio.h>

struct fraction
{
  int num,den;
};
typedef struct fraction Fraction;

int find_gcd(int a,int b)
{
  int gcd;
  for(int i=1;a>=i && b>=i;i++)
    if(a%i==0 && b%i==0)
      gcd=i;
  return gcd;
}

Fraction input()
{
  Fraction f;
  printf("Enter the numerator and denominator of fraction: \n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction result;
  int n1,n2,d1,d2;
  n1=f1.num;
  n2=f2.num;
  d1=f1.den;
  d2=f2.den;
  result.num=((n1*d2)+(n2*d1))/ find_gcd(d1,d2);
  result.den=(d1*d2)/ find_gcd(d1,d2);
  return result;
}

void output(Fraction f1,Fraction f2,Fraction result)
{
  printf("%d/%d + %d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,result.num,result.den);
}

int main()
{
  Fraction f1,f2,sum;
  f1=input();
  f2=input();
  sum=add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}
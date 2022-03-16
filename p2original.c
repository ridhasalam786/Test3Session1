#include<stdio.h>

struct fraction
{
  int num,den;
};
typedef struct fraction Fraction;

Fraction input()
{
  Fraction f;
  printf("Enter numerator and denominator of fraction: \n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}

Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  Fraction largest;
  float x,y,z;
  x=f1.num/f1.den;
  y=f2.num/f2.den;
  z=f3.num/f3.den;
  if(x>y && x>z)
  {
    largest.num=f1.num;
    largest.den=f1.den;
  }
  else if(y>z)
  {
    largest.num=f2.num;
    largest.den=f2.den;
  }
  else
  {
    largest.num=f3.num;
    largest.den=f3.den;
  }
  return largest; 
}

void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
  printf("Fraction 1:%d/%d \n",f1.num,f1.den);
  printf("Fraction 2:%d/%d \n",f2.num,f2.den);
  printf("Fraction 3:%d/%d \n",f3.num,f3.den);
  printf("Largest among the three fractions is %d/%d \n",largest.num,largest.den);
}

int main()
{
  Fraction fr1,fr2,fr3,l;
  fr1=input();
  fr2=input();
  fr3=input();
  l=Largest_fraction(fr1,fr2,fr3);
  output(fr1,fr2,fr3,l);
}
#include <stdio.h>

int input_size()
{
  int n;
  printf("Enter the size of the array: \t");
  scanf("%d",&n);
  return n;
}

void input_array(int n,int a[n])
{
  printf("Enter the array elements: \t");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}

int find_largest(int n,int a[n])
{
  int largest,index;
  largest=a[0];
  for(int i=1;i<n;i++)
  {
    if(a[i]>largest)
    {
      largest=a[i];
      index=i;
    }
    else
      continue;
  }
  if(a[0]==largest)
  {
      index=0;
  }
  return index;
}

void output(int n,int a[n],int index)
{
  printf("Given array: \t");
  for(int i=0;i<n;i++)
    printf("%d \t",a[i]);
  printf("Index of largest number in the given array is %d \n",index);
}

int main()
{
  int n,ind;
  n=input_size();
  int a[n];
  input_array(n,a);
  ind=find_largest(n,a);
  output(n,a,ind);
  return 0;
}
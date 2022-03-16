#include <stdio.h>
#include <string.h>

void input_string(char *a)
{
  printf("Enter a string: \t");
  fgets(a,100,stdin);
}

int count_words(char *string)
{
  char *token = strtok(string, " ");
  int count=0;
  while (token != NULL) 
  {
    count++;
    token = strtok(NULL, " ");
  }
  return count;
}

void output(char *string, int no_words)
{
  printf("Number of words in the given string is %d \n",no_words);
}

int main()
{
    char s[100];
    int n;
    input_string(s);
    n=count_words(s);
    output(s,n);
    return 0;
}
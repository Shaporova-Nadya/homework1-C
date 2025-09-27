#include <stdio.h>
#include <string.h>

int main(void) 
{
  char str[] = "((a + b) * (c + d)";
  int count = 0;
  int i;
  for (i = 0; str[i] != '\0'; i++) 
  {
    if (str[i] == '(') 
    {
      count++;
    } 
    else if (str[i] == ')') 
    {
      count--;
    }
  }
  if (count == 0) 
  {
    printf("Скобки сбалансированны\n");
  } 
  else 
  {
    printf("Скобки не сбалансированны\n");
  }
  return 0;
}

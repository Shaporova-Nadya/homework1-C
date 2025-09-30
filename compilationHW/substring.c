#include <stdio.h>
#include <string.h>

int main(void) 
{
  const char *text = "банан,банан,яблоко,апельсин";
  const char *substring = "а";
  int count = 0;
  char *pos = (char *)text;

  while ((pos = strstr(pos, substring)) != NULL) 
  {
    count++;
    pos += strlen(substring);
  }
  printf("Количество вхождений \"%s\" в строку составляет %d.\n", substring, count);

  return 0;
}

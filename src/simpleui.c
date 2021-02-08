#include "tokenizer.h"
#include <stdio.h>
#include <string.h>

#define stringSize 100

int main()
{
  char str[stringSize];

  printf(">Entering a String on a Friday Night? Lol, Go Ahead: ");
  fgets(str, stringSize, stdin);

  int start = 0;
  int end;
  int counter;

  for (counter = 0; counter < strlen(str); counter++)
    {
      if (str[counter] == ' ' || counter == strlen(str)-1)
	{
	  end = counter;
	  printf ("%.*s\n", (end - start), str + start);
	  start = counter +1;
	}
    }
  return 0;
}


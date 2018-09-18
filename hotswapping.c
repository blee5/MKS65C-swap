#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main()
{
  int array[10];
  int* rp = array;
  int i;

  srand(time(NULL));
  // set first 9 to random numbers
  while (rp < array + 9)
  {
    *rp++ = rand() % 100;
  }
  // set last to 0
  *rp = 0;

  rp = array;
  printf("=====printing first array=====\n");
  for (i = 0; i < 10; i++)
  {
    printf("array[%d]: %d\n", i, rp[i]);
  }

  int reversed[10];
  int* reversed_rp = reversed + 9;

  rp = array;
  for (i = 0; i < 10; i++)
  {
    *reversed_rp-- = *rp++;
  }

  rp = reversed;
  printf("=====printing reversed array=====\n");
  for (i = 0; i < 10; i++)
  {
    printf("reversed_array[%d]: %d\n", i, reversed[i]);
  }
  return 0;
}

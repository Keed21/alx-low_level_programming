#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print whether a number is positve, negative or 0
 * Return:0
 */
int main(viod)
{
  int n;


  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n>0)
         printf("%d id positive\n", n);
  else if (n < 0)
         printf("%d is negative\n", n);
  else
        printf("%d is zero\n", n);
  return (0)
}

//Finding the sum of two numbers using CLP
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;
  if (argc != 3)
    {
      printf ("Enter 3 arguments, filename arg1 arg2\n");
      return 0;
    }

  for (i = 1; i < argc; i++)
    {
      sum = sum + atoi (argv[i]);
    }
    printf("The sum of %d and %d is %d\n",atoi(argv[1]),atoi(argv[2]),sum);
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define MAX_VALUE 100

int main()
{
  srand(time(0));
  int one, two, three;
  bool status = true;
  int count = 0;

  while (status)
  {
    one = rand() % MAX_VALUE + 1;
    two = rand() % MAX_VALUE + 1;
    three = rand() % MAX_VALUE + 1;

    printf("Numbers are %4d, %4d, %4d ", one, two, three);

    if (one == two && two == three)
    {
      printf("\nAll three values match. Took %d tries.You win!\n", count + 1);
      status = false;
    }
    else
    {
      printf("Trying again.\n");
    }
    count += 1;
  }

  return 0;
}

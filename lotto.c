#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_VALUE 100
#define SIZE 6
#define TIMES 10

int main()
{
  int i, j;

  srand(time(0));

  int arr[SIZE];
  int *ptr = arr;

  int total = 0;
  int avg = 0;

  printf("Random Numbers\n");

  for (j = 0; j < TIMES; j++)
  {
    for (i = 0; i < SIZE; i++)
    {
      *ptr = rand() % MAX_VALUE + 1;
      printf("%4d ", *ptr);
      total += *ptr;
    }
    avg = total / SIZE;
    printf("\tTotal: %d, Average: %d\n", total, avg);
    total = 0;
  }

  return 0;
}

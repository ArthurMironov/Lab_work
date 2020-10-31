#include <stdio.h>

long long get_fibbonachi_via_cycle(int number);
  int main()
  {
    int number;
    printf ("Enter n for find fibbonachi: ");
    scanf ("%d", &number);
    printf("%llu\t", get_fibbonachi_via_cycle(number + 1));
  }

long long get_fibbonachi_via_cycle(int number)
{
  long fib = 1;
  long fib_sum = 1;
  for (int i = 0; i < number - 2; i++)
  {
    fib += fib_sum;
    fib_sum = fib - fib_sum;
  }

  return fib_sum;
}

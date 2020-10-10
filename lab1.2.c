#include <stdio.h>

int is_simple(int *n)
{
  for (int i=2; i<*n; i++)
    {
      if (*n%i==0)
        return 0;
    }
  return 1;
}
int main(void)
{
 int n;
 scanf("%d", &n);
 printf ("%d", is_simple(&n));
}  
 










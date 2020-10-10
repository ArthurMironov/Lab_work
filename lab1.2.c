#include <stdio.h>

int is_simple(int number)
{
  for (int i=2; i<number; i++)
    {
    if (number%i==0)
  return 0;
    }
  return 1;
}
int main(void)
{
 int num;
 scanf("%d", &num);
 printf ("%d", is_simple(num));
}  
 
 






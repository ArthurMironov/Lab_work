#include <stdio.h>

int power (int number, int power);

int main()
{
    int i;
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    printf("Enter degree: ");
    scanf("%d",&i);    
    printf("%d %d\n", i, power(number, i));
    return 0;
}
int power (int x, int power)
{
  int i;
  int y;
  y=1;
  for (i = 1; i <= power; ++i)
  {
  y=y*x;
  }
  return y;
}

 






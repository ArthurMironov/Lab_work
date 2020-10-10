#include <stdio.h>

int get_power(int number, int power);

int main()
{
    int power;
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter degree: ");
    scanf("%d", &power);    
    printf("%d %d\n", power, get_power(number, power));
    return 0;
}
int get_power(int number, int power)
{
  int i;
  int result;
  result = 1;
  for (i = 1; i <= power; ++i)
  {
    result = result * number;
  }
    
  return result;
}






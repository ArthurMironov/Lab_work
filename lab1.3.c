#include <stdio.h>

int power (int m, int n);

int main()
{
    int i;
    int m;
    printf("Enter number: ");
    scanf("%d",&m);
    printf("Enter degree: ");
    scanf("%d",&i);    
    printf("%d %d\n", i, power(m, i));
    return 0;
}
int power (int x, int n)
{
  int i;
  int y;
  y=1;
  for (i = 1; i <= n; ++i)
  {
  y=y*x;
  }
  return y;
}

 






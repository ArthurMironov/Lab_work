#include <stdio.h>
#include <string.h>
char int_to_char(int);
void power(int, int, int);

int main()
{
  int number = 199, source = 8, target = 10;
  if (target > 36 || source > 10)
  {
    printf("Error");
  }
  else
  {
    power(number, source, target);
  }
}

char int_to_char(int number)
{
  if (number >= 0 && number <= 9) 
  {
    return number + '0';
  }
  else if (number >= 10 && number <= 36) 
  {
    return number - 10 + 'A';
  }
  else 
  {
    return ' ';
  }
}

void power(int number, int source, int target)
{
  int result_in_ten = 0;
  int line_lengt = sizeof(number) / sizeof(int);
  char result[30];
  
  for (int q = 0; q < 30; q++)  
  {
     result[q] = 0;
  }
  
  while (number > 0)
  {
     static int power = 1;
     result_in_ten = result_in_ten + number % 10 * power;
     power  *= source;
     number /= 10;
     if (number <= 0) 
     {
        power = 1;
     }
   }
   while (result_in_ten > 0) 
   {
      static int q = 0;
      result[q++] = int_to_char(result_in_ten % target);
      result_in_ten /= target;
        if (result_in_ten <= 0) 
        {
          q = 0;
        }
   }
   int length = strlen(result);
   for (int q = 0; q < length / 2; q++)
   {
      result[q] += result[length - 1 - q];
      result[length - 1 - q] = result[q] - result[length - q - 1];
      result[q] -= result[length - 1 - q];
   }
  
  printf("%s", result);
}

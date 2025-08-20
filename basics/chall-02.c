#include <stdio.h>

int cha(int a)
{

  int i, b = 1;
  for (i = 2; i <= a/2; i++)
  {
    if (a % i == 0)
    {
      b = 0;
      break;
    }
  }

  return b;
}

int main()
{
  int N;

  printf("enter a numbre :");
  scanf("%d", &N);
  if (cha(N) == 1)
  {
    printf("la nombre a premier");
  }
  else
    printf("la nombre est ne pas premier");
}
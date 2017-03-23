#include <stdio.h>

int prime(int input)
{
  if(input < 2)
    return 0;
  else
  {
    int i;
    for(i = 2; i < input; i++)
    {
      if(input % i == 0)
      {
        return 0;
      }
    }
    return 1;
  }
}

int main()
{
  int cases, a, b, i;
  scanf("%d", &cases);
  while(cases--)
  {
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
      if(prime(i))
      {
        printf("%d\n", i);
      }
    }
    printf("\n");
  }
  return 0;
}

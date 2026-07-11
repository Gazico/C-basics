#include <stdio.h>
#include <stdlib.h>

int main()
{

int a, b, H;
  printf("Enter two numbers:");
  scanf("%d %d", &a, &b);

  for(a<b?a:b; H>=1; H--)
  {
      if(a%H==0 && b%H==0)
     break;
  }
  printf("Hcf of given numbers is %d", H);
  return 0;
 }


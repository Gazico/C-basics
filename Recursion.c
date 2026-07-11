
/*
#include<stdio.h>
void f1()
int main()
{
    f1();
    printf("\n");
    return 0;
}
void f1()
{
int a;
  printf("Enter a number:");
  scanf("%d", &a);
  if(a>0)
    f1();
  printf("%d", &a);
}
*/





//write a recursive function to calculate factorial of n.
#include<stdio.h>
int main()
{
}
int fact(int n)
{
	if(n==0)
	return 1;
	return(n*fact(n-1));
}






















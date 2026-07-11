#include <stdio.h>

int main()
{
  /* int i, n,s=0;
   printf("Enter any number:");
   scanf("%d", &n);

   for(i=1,s=0; i<=n; i++)
   {
       s=s+i*i;
   }
   printf("sum is %d", s);
   return 0;

}
 */


/*
   int i,n,s=0;
   printf("Enter any number:");
   scanf("%d", &n);

   for(i=1,s=0; i<=n; i++)
   {
       s=s+2*i;
   }
   printf("Sum is %d", s);
   return 0;
}
 */


   /*
   int i,p,n;
   printf("Enter a number:");
   scanf("%d", &n);

   for(i=1,p=1; i<=n; i++) // while(n)
   {
       p=p*i; //p=p*n;
               //n--;
   }
   printf("Factorial is %d", p);
   return 0;
 }

   */

   /*
   int i,s=0,n;
   printf("Enter a number:");
   scanf("%d", &n);

   for(i=1,s=0; i<=n; i++)
   {
       s=s+2*i-1;
   }
   printf("Sum is %d", s);
   return 0;
 }
 */


   /*
   int x,count=0;
   printf("Enter a number:");
   scanf("%d", &x);
   while(x) //for(count=0; x; x/10; count++);
   {
       x=x/10;
       count++;

   }
   printf("count is %d",count);
   return 0;
 }
  */



  /*
  int i, x;
  printf("Enter a number:");
  scanf("%d", &x);

  for(i=1; i<=x; i++)
   {
      if(i%x==0)
        break;
      if(i==x)

        printf("Prime");
      else
        printf("Not prime");
    }
      return 0;
}
   */



   /*
   int a,b,L;
   printf("Enter  two numbers:");
   scanf("%d%d", &a,&b);

   for(L=a>b?a:b; L<=a*b; L++)
      {
          if(b%a==0 && L%b==0)
            printf("Lcm is %d", L);
          return 0;
      }
   }
   */

     /*
    int x, n=0;
    printf("Enter a number:");
    scanf("%d", &x);

    while(x)
    {
        n=n*10 + x%10;;
        x=x/10;
    }
    printf("Reverse of given number is %d", n);
    return 0;
  }

    */

    int x, a ,b;
    printf("\n1. Addition");
    printf("\n2. Multiplication");
    printf("\n3. Subtraction");
    printf("\n4. Division");
    printf("\nEnter your choice:");
    scanf("%d", &x);

    switch(x)
    {
    case 1:
        printf("\nEnter two numbers:");
        scanf("%d%d, &a,&b");
        printf("sum is %d", a+b);
        break;
    case 2:
        printf("\nEnter two numbers:");
        scanf("%d%d, &a,&b");
        printf("Product is %d", a*b);
        break;

    case 3:
        printf("\nEnter two numbers:");
        scanf("%d%d, &a,&b");
        printf("Difference is %d", a-b);
        break;

    case 4:
        printf("\nEnter two numbers:");
        scanf("%d%d, &a,&b");
        printf("Quotient is %d", a/b);
        break;

    default:
        printf("\nInvalid choice");
    }
    printf("\n");
    return 0;
 }




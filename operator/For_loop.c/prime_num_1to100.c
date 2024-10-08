#include <stdio.h>
#include <math.h>
int main()
{

    int i, num, count = 0,numprime=0,sum=0,n,m;
    

   printf("enter starting point : ");
   scanf("%d", &n);
    printf("enter ending point : ");
   scanf("%d", &m);
  

  for(num=n; num<=m; num++)
  {
    count=0;
 if (num <= 1)
    {
        count++; // or count=1;

    }

    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            count++; // or count=1;
            break;
        }
    }
    if (count == 0)
    {
        printf("%d ",num);
        numprime++;
        sum+=num;
    }
  }
        printf("\nnum of prime %d",numprime);
        printf("\nsum of prime: %d",sum);
getchar();
}
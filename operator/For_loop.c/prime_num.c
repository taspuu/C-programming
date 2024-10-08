#include <stdio.h>
#include <math.h>
int main()
{

    int i, num, count = 0;
    printf("enter a num: ");
    scanf("%d", &num);

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
        printf("prime num");
    }
    else
    {
        printf("not prime");
    }
}
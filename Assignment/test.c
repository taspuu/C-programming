#include<stdio.h>
int main()
{

    int a,b,i,j,lsd1=0,lsd2=0,n;
    printf("Enter two num: ");
    scanf("%d",&a);
    scanf("%d",&b);


    for(i=2; i<=a/2; i++)
    {
        if(a%i==0)
        {
            lsd1+=i;
            break;
        }

        for(j=2; j<=b/2; j++)
        {
            if(b%i==0)
            {
                lsd2+=j;
                break;
            }

        }
    }

    if(lsd1>lsd2)
    {
        printf("%d",lsd1);
    }
    else
    {
        printf("%d",lsd2);
    }

    return 0;
}
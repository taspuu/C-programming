#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    int d;
    char c;
    printf("Enter your Equation: ");
    scanf("%lf%c%lf",&a,&c,&b);

    switch (c)
    {
    case '+':
        {a+=b; printf("The value is: %lf\n",a);}
         break;
    case '-':
        {a-=b; printf("The value is: %lf\n",a);}
         break;
    case '*':
        {a*=b; printf("The value is: %lf\n",a);}
         break;
    case '/':
        {a/=b; printf("The value is: %lf\n",a);}
        break;
    case '%':
        {d= (int)a;
        d%=(int)b;
        printf("The value is: %d\n",d);

        }

    default:
        printf("Enter appropriate syntex\n");

    }



    return 0;
}

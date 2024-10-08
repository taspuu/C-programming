#include<stdio.h>
#include<math.h>
#include<string.h>
#include<windows.h>



void tri(char name[25])
{
    double a, b, c, s, area;

    if (strcmp(name, "Equilateral") == 0 || strcmp(name, "1") == 0)
    {
        printf("Enter the value of side: ");
        scanf("%lf", &a);
        area = (sqrt(3) / 4) * pow(a, 2);
        system("cls");
        printf("The area of Equilateral Triangle is: %lf\n", area);
    }
    else if (strcmp(name, "Scalene") == 0 || strcmp(name, "2") == 0)
    {
        printf("Enter the value of side a: ");
        scanf("%lf", &a);
        printf("Enter the value of side b: ");
        scanf("%lf", &b);
        printf("Enter the value of side c: ");
        scanf("%lf", &c);
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        system("cls");
        printf("The area of Scalene Triangle is: %lf\n", area);
    }
    else if (strcmp(name, "Isosceles") == 0 || strcmp(name, "3") == 0)
    {
        printf("Enter the value of side a: ");
        scanf("%lf", &a);
        printf("Enter the value of side b: ");
        scanf("%lf", &b);
        area = (a * b) / 2;
        system("cls");
        printf("The area of Isosceles Triangle is: %lf\n", area);
    }
    else
    {
        printf("Invalid input\n");
    }
}

int main()
{
    char name[25];
    printf("Enter the following options!!\n");
    printf("1. Equilateral   2. Scalene   3. Isosceles  \n");
    printf("Enter your Options: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // remove newline character
    system("cls");
    tri(name);
    return 0;
}
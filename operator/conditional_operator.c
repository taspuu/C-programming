#include <stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter two num: ");
    scanf("%d%d", &num1, &num2);

    result = (num1 > num2) ? num1 : num2;
    printf("The large number is: %d", result);
}
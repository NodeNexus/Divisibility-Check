#include <stdio.h>
void main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("The Number is divisible by 5 and 11");
    }
    else if (num % 5 == 0)
    {
        printf("The Number is divisible by 5 only");
    }
    else if (num % 11 == 0)
    {
        printf("The Number is divisible by 11 only");
    }
    else
    {
        printf("The Number is not divisible by 5 and 11");
    }
}

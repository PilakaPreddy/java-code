#include <stdio.h>
int main()
{
    int a, b, c;
    printf(" Enter the num1 = ");
    scanf("%d", &a);
    printf("\n Enter the num2 = ");
    scanf("%d", &b);
    printf("\n Enter the num3 = ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("\n Greatest number is %d \n",a);
        }
        else
        {
            printf("\n Greatest number is %d \n",c);
        }
    }
    else if (b > c)
    {
        printf("\n Greatest number is %d \n",b);
    }
    else
    {
        printf("\n Greatest number is %d \n",c);
    }
    return 0;
}

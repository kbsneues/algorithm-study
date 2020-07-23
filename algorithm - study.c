#include <stdio.h>

int sumof(int a, int b)
{

    int i, sum = 0;

    if (a < b)
    {
        for (i = a; i <= b; i++)
            sum += i;
    }

    else if (a > b)
    {
        for (i = a; i >= b; i--)
            sum += i;
    }

    else
        sum = a;

    return sum;
}

int main()
{
    int a, b;

    printf("a의 값 : ");
    scanf("%d", &a);
    printf("b의 값 : ");
    scanf("%d", &b);

    printf("%d 와 %d 의 사이의 값은 %d", a, b, sumof(a, b));
    return 0;
}
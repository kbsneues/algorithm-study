#include <stdio.h>

int min4(int a, int b, int c, int d)
{

    int min = a; // a가 최솟값이라고 가정

    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (min > d)
        min = d;

    return min;
}

int main()
{
    int a, b, c, d;
    printf("a의 값 : ");
    scanf("%d", &a);
    printf("b의 값 : ");
    scanf("%d", &b);
    printf("c의 값 : ");
    scanf("%d", &c);
    printf("d의 값 : ");
    scanf("%d", &d);

    printf("4개의 값 중 최솟값은 %d\n", min4(a, b, c, d));

    return 0;
}
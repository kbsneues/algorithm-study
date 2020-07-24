#include <stdio.h>

void triangleLB(int n)
{ // 왼쪽 아래가 직각인 이등변 삼각형을 출력

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            printf("*");
    printf("\n");
}

void triangleLU(int n)
{ // 왼쪽 위가 직각인 이등변 삼각형을 출력

    for (int i = 5; i >= n; i--)
        for (int j = 1; j <= i; j++)
            printf("*");
    printf("\n");
}

void triangleRU(int n)
{ // 오른쪽 위가 직각인 이등변 삼각형을 출력

    int i, j;

    for (i = n; i > 0; i--)
    {
        for (j = 0; j < n - 1 - i; j++)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

void triangleRB(int n)
{ // 오른쪽 아래가 직각인 이등변 삼각형을 출력

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
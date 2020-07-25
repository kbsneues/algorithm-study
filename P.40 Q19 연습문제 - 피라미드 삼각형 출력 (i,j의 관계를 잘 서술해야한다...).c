#include <stdio.h>

void spira(int n)
{ // 피라미드 별 찍는 함수

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++) // 어떤 n의 값이 들어와도 마지막 줄 공백 없이 별 채우기
            printf(" ");
        for (j = 0; j < i * 2 + 1; j++)
            printf("*");
        printf("\n");
    }
}

int main()
{

    int n;

    printf("n의 값을 입력하시오 : ");
    scanf("%d", &n);

    spira(n); // 함수 호출

    return 0;
}

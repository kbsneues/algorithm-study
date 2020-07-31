#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n)
{ // Q1 문제

    int min = a[0];

    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];

    return min;
}

int sumof(const int a[], int n)
{ // Q2 문제
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

double aveof(const int a[], int n)
{ // Q3 문제
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return (double)sum / n;
}

int main()
{

    int *height; // 포인터 배열
    int n;       // 인원 수

    printf("인원 수를 입력하시오 : ");
    scanf("%d", &n);

    height = calloc(n, sizeof(int)); // 메모리 할당 (height는 배열로 사용 가능)

    for (int i = 0; i < n; i++)
    {
        printf("%d번째 사람의 키 : ", i + 1);
        scanf("%d", &height[i]); // n명의 키 저장
    }

    printf("%d 명의 사람 중 키가 가장 작은 사람은 %d\n", n, minof(height, n));

    printf("%d 명의 키의 합계는 %d\n", n, sumof(height, n));

    printf("%d 명의 키의 평균은 %.2f\n", n, aveof(height, n));

    free(height); // 메모리 해제

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    srand(time(NULL)); // 시간으로 난수의 seed을 초기화

    n = 5 + (rand() % 15 + 1); // 인원 수 :  5 이상 20 이하의 난수 --> Q4 문제
    printf("인원 수는 %d명 입니다.\n", n);

    height = calloc(n, sizeof(int)); // 메모리 할당 (height는 배열로 사용 가능)

    for (int i = 0; i < n; i++)
    {
        height[i] = 100 + rand() % 90; // 키 : 100~189 난수
        printf("%d번째 사람의 키 : %d\n", i + 1, height[i]);
    }

    printf("%d 명의 사람 중 키가 가장 작은 사람은 %d\n", n, minof(height, n));

    printf("%d 명의 키의 합계는 %d\n", n, sumof(height, n));

    printf("%d 명의 키의 평균은 %.2f\n", n, aveof(height, n));

    free(height); // 메모리 해제

    return 0;
}
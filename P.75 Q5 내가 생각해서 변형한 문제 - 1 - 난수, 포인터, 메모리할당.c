#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) \
    do                   \
    {                    \
        type t = x;      \
        x = y;           \
        y = t;           \
    } while (0)

void ary_reverse(int a[], int n)
{

    if (n == 1) // 배열의 요소가 1개인 경우 다른 값과 바뀌지 않는다.
        printf("배열의 요소가 1개 이므로 다른 요소와 교환할 수 없습니다...\n");

    for (int i = 0; i < n / 2; i++)
    { // 배열의 요소가 2개 이상인 경우
        printf("a[%d]과 a[%d]를 교환합니다.\n", i, n - i - 1);
        swap(int, a[i], a[n - i - 1]); // 배열의 값을 바꾼다.
        for (int i = 0; i < n; i++)
            printf("%d ", a[i]); // 모든 배열을 출력한다.
        printf("\n\n");
    }
}

int main()
{

    int element; // 배열의 요소 개수
    int *arr;    // 포인터 --> 배열로 사용 가능
    int value;   // 포인터의 값 (배열의 값)

    srand(time(NULL)); // 시간으로 난수의 seed를 초기화

    element = rand() % 10 + 1; // element 은 1~10 까지 난수

    arr = calloc(element, sizeof(int)); // arr은 배열 --> 메모리 할당

    for (int i = 0; i < element; i++)
        arr[i] = rand() % 100 + 1; // 배열의 값은 1~100 사이의 값으로 설정

    for (int i = 0; i < element; i++)
        printf("arr[%d] = %d\n", i, arr[i]); // 배열의 모든 값을 출력

    printf("\n");
    ary_reverse(arr, element); // 배열의 값을 바꾸는 함수 호출

    free(arr); // 메모리 반환

    return 0;
} 

#include <stdio.h>

int main()
{
    int i, n;
    int prime[500];            // 소수를 저장하는 배열
    int ptr = 0;               // 이미 얻은 소수의 개수
    unsigned long counter = 0; // 나눗셈 횟수
    prime[ptr++] = 2;          // 2는 소수이다

    for (n = 3; n <= 1000; n += 2)
    { // 홀수만을 대상으로 한다
        for (i = 1; i < ptr; i++)
        {
            counter++;
            if (n % prime[i] == 0) // 나누어떨어지므로 소수가 아니다
                break;             // 더 이상의 반복은 필요없다
        }
        if (ptr == i)         // 마지막까지 나누어떨어지지 않으면
            prime[ptr++] = n; // 배열에 저장한다.
    }
    for (i = 0; i < ptr; i++)
        printf("%d\n", prime[i]);
    printf("나눗셈을 실행한 횟수 : %lu\n", counter);

    return 0;
} 

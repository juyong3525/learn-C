#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
// 주사위 함수
void dice(int num)
{
    printf("용용이가 던진 주사위: %d\n", num);
}

int main(void)
{
    dice(2);
    dice(3);
    dice(5);
    return 0;
}
*/

/*
// 더하기 함수
int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    printf("%d", add(10, 20));
    return 0;
}
*/

/*
// 사칙연산 함수 만들기
void calculator(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("\n");
}

int main(void)
{
    calculator(10, 3);
    calculator(15, 2);
    calculator(18, 4);
    return 0;
}
*/

// 재귀함수를 이용한 팩토리얼
int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main(void)
{
    int n;
    printf("n 팩토리얼을 계산합니다.\n");
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
}

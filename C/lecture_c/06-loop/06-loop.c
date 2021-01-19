#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
// 1부터 n까지의 합 출력
 int main(void)
{
    int n;
    long long sum;
    sum = 0;
    printf("n을 입력하세요. \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
} 
*/

/*
// -1이 입력될 때까지 더하기
 int main(void)
{
    int sum = 0;
    for (;;)
    {
        int x;
        scanf("%d", &x);
        if (x == -1)
            break;
        sum += x;
    }
    printf("\n합계: %d\n", sum);
    return 0;
} 
*/

/*
// 특정 문자를 n번 출력하기
 int main(void)
{
    int n;
    char a;
    scanf("%d %c", &n, &a);
    while (n--)
    {
        printf("%c", a);
    }
    return 0;
} 
*/

/*
// 특정 숫자의 구구단 출력하기
int main(void)
{
    int n;
    printf("구구단을 출력하고 싶은 숫자를 입력하세요.\n");
    scanf("%d", &n);
    int i = 1;
    while (i <= 9)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
} 
*/

/*
// 중첩된 반복문 (구구단 전체)
int main(void)
{
    int i = 1;
    while (i <= 9)
    {
        int j = 1;
        while (j <= 9)
        {
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/

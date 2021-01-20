#include <stdio.h>

/*
// 포인터 기본
int main(void)
{
    int a = 5;
    int *b = &a;        // 여기 *b 의 *
    printf("%d\n", *b); // 여기 *b 의 * 은 다르다.
    return 0;
}
*/

/*
// 배열 각 원소의 주소값 출력하기
int main(void)
{
    int a[] = {1, 1, 2, 3, 4, 5, 6, 7, 8, 10};
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", &a[i]);
    }
    return 0;
}
*/

/*
// 다중 포인터
int main(void)
{
    int a = 5;
    int *b = &a;
    int **c = &b;
    printf("%d\n", **c);
    return 0;
}
*/

// 배열과 포인터
int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *b = a;
    printf("%d\n", b[2]);
}
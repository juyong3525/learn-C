#include <stdio.h>

/*
// 2차원 배열 출력
int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

int main(void)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
// 3차원 배열 출력
int a[2][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                  {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}}};

int main(void)
{
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
// 포인터를 배열처럼 사용하기
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *b = &a;
    printf("%d\n", b[2]);

    return 0;
}
*/

/*
// 배열의 이름은 배열의 첫 번째 원소의 주소
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *b = &a[0];
    printf("%d\n", b[2]);
    return 0;
}
*/

/*
// 연산을 통해 자료형의 크기만큼 이동하는 포인터
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a + i);
    }
    return 0;
}
// 출력 예: -483333856 -483333852 -483333848 -483333844 -483333840 
*/

/*
// 배열을 포인터처럼 사용해 각 원소에 접근
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
    }
    return 0;
}
*/

// 2차원 배열을 포인터로 처리하기
int main(void)
{
    int a[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    int(*p)[5] = a[1];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", p[0][i]);
    }
    return 0;
}
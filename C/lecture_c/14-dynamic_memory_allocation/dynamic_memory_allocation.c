#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
// 동적 메모리 할당 기본
int main(void)
{
    int *a = (int *)malloc(sizeof(int));
    printf("%d\n", a);
    free(a);
    return 0;
}
*/

/*
// memset 함수를 이용하여 동적으로 문자열 처리하기
int main(void)
{
    char *a = (char *)malloc(100 * sizeof(char));
    memset(a, 'A', 100);
    for (int i = 0; i < 100; i++)
    {
        printf("%c ", a[i]);
    }
    free(a);
    return 0;
}
*/

// 동적 메모리 할당으로 2차원 배열 만들기
int main(void)
{
    // 초기화
    int **p = (int **)malloc(sizeof(int *) * 3);
    for (int i = 0; i < 3; i++)
    {
        *(p + i) = (int *)malloc(sizeof(int) * 3);
    }

    // 2차원 배열의 각각의 원소에 값 넣기
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(p + i) + j) = i * 3 + j; // *(*(p + i) + j) = p[i][j]
        }
    }

    // 2차원 배열의 각각의 원소 출력
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }

    // 동적 메모리 반환
    for (int i = 0; i < 3; i++)
    {
        free(*(p + i));
    }

    return 0;
}
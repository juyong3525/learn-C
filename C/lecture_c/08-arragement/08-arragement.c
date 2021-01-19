#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

/*
// 배열의 각 인덱스 값 출력
int main(void)
{
    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
*/

/*
// 배열의 원소 중 최대값 찾기
int main(void)
{
    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};
    int i, maxValue = INT_MIN;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > maxValue)
            maxValue = a[i];
    }
    printf("%d\n", maxValue);
    return 0;
}
*/

/*
// 배열의 원소 중 최소값 찾기
int main(void)
{
    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};
    int i, minValue = INT_MAX;
    for (i = 0; i < 10; i++)
    {
        if (a[i] < minValue)
            minValue = a[i];
    }
    printf("%d\n", minValue);
    return 0;
}
*/

/*
// 문자열의 문자 바꾸기
int main(void)
{
    char a[20] = "Hello World";
    a[4] = ',';
    printf("%s", a);
    return 0;
}
*/

// 문자열에 포함된 'l'개수 출력하기
int main(void)
{
    char a[] = "Hello World";
    int count = 0;
    for (int i = 0; i < 11; i++)
    {
        if (a[i] == 'l')
            count += 1;
    }
    printf("%d", count);
    return 0;
}
#include <stdio.h>

/*
// 전역 변수
int a = 5;

int changeValue()
{
    a = 10;
}

int main(void)
{
    printf("%d\n", a);
    changeValue();
    printf("%d\n", a);
    return 0;
}
*/

/*
// 지역 변수
int main(void)
{
    int a = 7;
    if (1)
    {
        int a = 5;
    }
    printf("%d\n", a);
    return 0;
}
*/

/*
// 정적 변수
void process()
{
    static int a = 5;
    a += 1;
    printf("%d\n", a);
}

int main(void)
{
    process();
    process();
    process();
    return 0;
}
*/

/*
// 레지스터 변수
int main(void)
{
    register int a = 10, i;
    for (i = 0; i < a; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
*/

/*
// 값에 의한 전달 방식
void add(int a, int b)
{
    a += b;
}

int main(void)
{
    int a = 7;
    add(a, 10);
    printf("%d\n", a);
    return 0;
}
*/

// 참조에 의한 전달 방식
void add(int *a, int b)
{
    *a += b;
}

int main(void)
{
    int a = 7;
    add(&a, 10);
    printf("%d\n", a);
    return 0;
}

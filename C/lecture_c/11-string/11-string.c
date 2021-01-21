#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
// 문자열을 상수로 표현 (포인터 활용)
int main(void)
{
    char *a = "Hello World";
    printf("%s\n", a);
    return 0;
}
*/

/*
// 배열처럼 처리가 가능함
int main(void)
{
    char *a = "Hello World";
    printf("%c\n", a[1]);
    printf("%c\n", a[4]);
    printf("%c\n", a[8]);
    return 0;
}
*/

/*
// gets() 함수를 이용한 공백을 포함한 입력
int main(void)
{
    char a[100];
    gets(a);
    printf("%s\n", a);
    return 0;
}
*/

/*
// 버퍼의 크기를 지키는 gets_s() 함수
int main(void)
{
    char a[100];
    gets_s(a, sizeof(a));
    printf("%s\n", a);
    return 0;
}
*/

/*
// 문자열 길이를 반환하는 함수
int main(void)
{
    char a[20] = "YongYong Pong";
    printf("문자열의 길이: %d\n", strlen(a));
    return 0;
}
*/

/*
// 문자열 사전적 비교
int main(void)
{
    char a[10] = "apple";
    char b[10] = "banana";
    printf("두 배열의 사전 순 비교: %d\n", strcmp(a, b));
    return 0;
}
*/

/*
// 문자열 복사
int main(void)
{
    char a[20] = "My name";
    char b[20] = "Yong";
    strcpy(a, b);   // b를 a에 넣음
    printf("복사된 문자열: %s\n", a);
    return 0;
}
*/

/*
// 뒤에 있는 문자열을 앞에 있는 문자열에 합치기
int main(void)
{
    char a[30] = "My name is ";
    char b[20] = "YongYong Pong";
    strcat(a, b);
    printf("합쳐진 문자열: %s\n", a);

    return 0;
}
*/

// 문자열 찾기
int main(void)
{
    char a[30] = "I like you";
    char b[20] = "like";
    printf("찾은 문자열: %s\n", strstr(a, b));
    return 0;
}
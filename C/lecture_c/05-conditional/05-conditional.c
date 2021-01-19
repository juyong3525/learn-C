#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int main(void)
// {
//     char a;
//     scanf("%c", &a);
//     switch (a)
//     {
//     case 'A':
//         printf("A 학점입니다.\n");
//         break;
//     case 'B':
//         printf("B 학점입니다.\n");
//         break;
//     case 'C':
//         printf("C 학점입니다.\n");
//         break;
//     default:
//         printf("학점을 바르게 입력하세요.\n");
//         break;
//     }
//     return 0;
// }

int main(void)
{
    printf("월을 입력하세요. ");
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    case 2:
    case 3:
        printf("봄\n");
        break;
    case 4:
    case 5:
    case 6:
        printf("여름\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("가을\n");
    case 10:
    case 11:
    case 12:
        printf("겨울\n");
        break;
    default:
        printf("1~12 사이의 값을 입려하세요.\n");
        break;
    }
    return 0;
}
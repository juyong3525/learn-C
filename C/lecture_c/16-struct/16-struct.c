#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
// 학생 구조체를 만들어 활용하기
struct Student
{
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
};

int main(void)
{
    struct Student s; // 구조체 변수 선언
    strcpy(s.studentId, "1402446");
    strcpy(s.name, "용용퐁");
    s.grade = 4;
    strcpy(s.major, "기계공학과");
    printf("%s\n", s.studentId);
    printf("%s\n", s.name);
    printf("%d\n", s.grade);
    printf("%s\n", s.major);
    return 0;
}
출력:
1402446
용용퐁
4
기계공학과
*/

/*
// 구조체의 변수를 한 번에 초기화하기
struct Student
{
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
};

int main(void){
    struct Student s = {"1402446", "용용퐁", 4, "기계공학과"};
    printf("%s\n", s.studentId);
    printf("%s\n", s.name);
    printf("%d\n", s.grade);
    printf("%s\n", s.major);
    return 0;
}
출력:
1402446
용용퐁
4
기계공학과
*/

/* 
// 이런 형태의 초기화도 가능함
struct Student
{
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
} s = {"1402446", "용용퐁", 4, "기계공학과"};

int main(void){
    printf("%s\n", s.studentId);
    printf("%s\n", s.name);
    printf("%d\n", s.grade);
    printf("%s\n", s.major);
    return 0;
}
출력:
1402446
용용퐁
4
기계공학과
*/

/*
// typedef 키워드를 이용하면 임의의 자료형을 만들 수 있으므로 선언이 더 짧아짐
typedef struct Student
{
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
} Student;

int main(void)
{
    Student s = {"1402446", "용용퐁", 4, "기계공학과"};
    printf("%s\n", s.studentId);
    printf("%s\n", s.name);
    printf("%d\n", s.grade);
    printf("%s\n", s.major);
    return 0;
}
출력:
1402446
용용퐁
4
기계공학과
*/

/*
// 최근에는 익명 구조체의 개념이 등장하여, 구조체 이름 부분을 비워 놓아도 됨
typedef struct
{
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
} Student;

int main(void)
{
    Student s = {"1402446", "용용퐁", 4, "기계공학과"};
    printf("%s\n", s.studentId);
    printf("%s\n", s.name);
    printf("%d\n", s.grade);
    printf("%s\n", s.major);
    return 0;
}
출력:
1402446
용용퐁
4
기계공학과
*/

// 구조체가 포인터 변수로 사용되는 경우 내부 변수에 접근할 때 화살표(->)를 사용
typedef struct
{
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
} Student;

int main(void)
{
    Student *s = malloc(sizeof(Student));
    strcpy(s->studentId, "1402446");
    strcpy(s->name, "용용퐁");
    s->grade = 4;
    strcpy(s->major, "기계공학과");
    printf("%s\n", s->studentId);
    printf("%s\n", s->name);
    printf("%d\n", s->grade);
    printf("%s\n", s->major);
    return 0;
}
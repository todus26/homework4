#include <stdio.h>

struct student1 { 
    char lastName; 
    int  studentId; 
    char grade;
};

typedef struct {
    char lastName;
    int  studentId;
    char grade;
} student2; // typedef로 구조체 선언

int main() {

    struct student1 st1 = {'A', 100, 'A'}; //st1 구조체 변수 선언 및 초기화

    printf("----------[정새연] [2023041074]----------\n"); 
    printf("st1.lastName = %c\n", st1.lastName); //구조체 변수의 멤버(st1.lastName) 출력
    printf("st1.studentId = %d\n", st1.studentId); //구조체 변수의 멤버(st1.studentId) 출력
    printf("st1.grade = %c\n", st1.grade); //구조체 변수의 멤버(st1.grade) 출력

    student2 st2 = {'B', 200, 'B'}; //st2 구조체 변수 선언 및 초기화

    printf("\nst2.lastName = %c\n", st2.lastName); //구조체 변수의 멤버(st2.lastName) 출력
    printf("st2.studentId = %d\n", st2.studentId); //구조체 변수의 멤버(st2.studentId) 출력
    printf("st2.grade = %c\n", st2.grade); //구조체 변수의 멤버(st2.grade) 출력
    
    student2 st3; //student2 형식의 변수 st3 선언
    st3 = st2; //st2의 값들을 st3에 복사

    printf("\nst3.lastName = %c\n", st3.lastName); //구조체 변수의 멤버(st3.lastName) 출력
    printf("st3.studentId = %d\n", st3.studentId); //구조체 변수의 멤버(st3.studentId) 출력
    printf("st3.grade = %c\n", st3.grade); //구조체 변수의 멤버(st3.grade) 출력

    /* equality test */
    //st3와 st2의 값이 같은지 비교 - 구조체 내의 성분들을 각각 비교해주어야 함.
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade)
    printf("equal\n");
else
    printf("not equal\n");


    return 0;
}
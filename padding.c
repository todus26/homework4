#include <stdio.h>
struct student {
    char lastName[13];   /* 13 bytes */
    int studentId;       /* 4 bytes */
    short grade;         /* 2 bytes */
};

int main()
{
    struct student pst; //구조체 변수 선언
    
    printf("----------[정새연] [2023041074]----------\n"); 
    printf("size of student = %ld\n", sizeof(struct student)); //구조체 student의 크기 출력
    //구조체 student의 크기는 24bytes -> 13 + 4 + 2 + 5(padding) = 24 
    printf("size of int = %ld\n", sizeof(int)); //int의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short의 크기 출력.

    return 0;
}
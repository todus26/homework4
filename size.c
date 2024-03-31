#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x;

    printf("----------[정새연] [2023041074]----------\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 가리키는 값의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //x가 가리키는 값이 가리키는 값의 크기 출력.
}
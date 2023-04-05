#include <stdio.h>

struct student { //문자열, 정수를 저장할 수 있는 구조체를 정의한다.
    char lastName[13];
    int studentId;
    short grade;
};

int main() {

    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student));    /* 13 bytes */    //선언한 구조체 자료형의 크기를 출력한다. 
    printf("size of int = %ld\n", sizeof(int));                  /* 4 bytes */
    printf("size of short = %ld\n", sizeof(short));             /* 2 bytes */

    return 0;
}

/* 
이번 장에서 학습한 모든 자료형의 크기를 sizeof()연산자를 사용하여 출력하는 프로그램을 작성하여 보라.
 */

#include <stdio.h>

int main(void) {
    printf("char형의 크기는 %d바이트입니다.\n", sizeof(char));
    printf("short형의 크기는 %d바이트입니다.\n", sizeof(short));
    printf("int형의 크기는 %d바이트입니다.\n", sizeof(int));
    printf("long형의 크기는 %d바이트입니다.\n", sizeof(long));
    printf("long long형의 크기는 %d바이트입니다.\n", sizeof(long long));
    printf("float형의 크기는 %d바이트입니다.\n", sizeof(float));
    printf("double형의 크기는 %d바이트입니다.\n", sizeof(double));
    printf("long double형의 크기는 %d바이트입니다.", sizeof(long double));

    return 0;
}
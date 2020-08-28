/* 
사용자로부터 소수점 표기 형식으로 실수를 읽어서 지수 형식으로 출력하는 프로그램을 작성하라. 

`` printf()에서 소수점 표기 형식은 %f, 지수형식은 %e로 출력할 수 있다.
*/
#include <stdio.h>

int main(void) {
    float number;

    printf("실수를 입력하시오: ");
    scanf("%f", &number);

    printf("지수 형식으로는H%e입니다.\n", number);

    return 0;
}
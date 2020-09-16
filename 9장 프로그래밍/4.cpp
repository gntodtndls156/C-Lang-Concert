/* 
실수 3.14를 보내면 정수부 3과 소수부 0.14를 나누어서 보내주는 함수 void get(double value, int *i_part, double *f_part)을 구현해보자. 매개 변수로 포인터를 사용하면 함수가 2개 이상의 값을 반환할 수 있다.
 */

#include <stdio.h>
#include <math.h>

void get(double value, int* i_part, double* f_part);

int main(void) {
    int i = 0;
    double value = 3.14, f = 0;

    get(value, &i, &f);

    return 0;
}

void get(double value, int* i_part, double* f_part) {
    *i_part = (int)value;
    *f_part = (int)value - value;

    printf("정수부=%d\n", *i_part);
    printf("소수부=%lf", *f_part);
}
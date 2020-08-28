/* 
사용자로부터 x의 값을 실수로 입력받아서 다음과 같은 다항식의 값을 계산하는 프로그램을 작성하라.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double x;
    double result;

    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x);

    result = 3 * (x * x * x) - 7 * (x * x) + 9;
    printf("다항식의 값은 %lf입니다.\n", result);

    return 0;

}
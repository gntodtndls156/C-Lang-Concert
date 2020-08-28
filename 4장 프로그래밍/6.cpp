/* 
다음 수식의 값을 계산하여서 화면에 출력하라.
 (pow(x, 3) - 3) / (x - 7)
x의 값은 사용자로부터 입력받는다.

`` x의 세제곱은 단순히 x를 3번 곱하면 된다. 즉 x * x * x로 3번 곱한다.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    float x;

    printf("정수를 입력하시오: ");
    scanf_s("%f", &x);

    printf("수식의 값은 %f입니다.", (pow(x, 3) - 20) / (x - 7));
}
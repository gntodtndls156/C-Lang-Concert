/* 
사용자에게 2개의 실수를 받아서 정수부를 더한 값을 출력하는 프로그램을 작성해보자.
 */

#include <stdio.h>

int main(void) {
    // 사용자에게 2개의 실수를 받아서 정수부를 더한 값을출력하는 프로그램을 작성해보자.
    float num1, num2;

    printf("2개의 실수를 입력하시오: ");
    scanf_s("%f %f", &num1, &num2);

    printf("합의 정수부 = %d", int(num1 + num2));
}
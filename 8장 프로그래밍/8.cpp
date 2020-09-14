/* 
2차 방정식의 근을 계산하는 함수 quad_eqn()를 작성하시오.
이 함수는 a, b, c를 나타내는 double형의 3개의 인수를 받는다.
판별식이 양수인 경우에만 근을 출력하시오.
만약 판별식의 값이 음수이면 근이 없다는 메세지를 출력하시오.

ax^2 + bx + c = 0
 */

#include <stdio.h>
#include <math.h>

void quad_eqn(double a, double b, double c);

int main(void) {
    printf("2차 방정식의 계수를 입력하시오: \n");
    printf("a: ");
    double a;
    scanf_s("%lf", &a);
    printf("b: ");
    double b;
    scanf_s("%lf", &b);
    printf("c: ");
    double c;
    scanf_s("%lf", &c);

    quad_eqn(a, b, c);

    return 0;
}

void quad_eqn(double a, double b, double c) {
    double result1, result2, result;

    result = pow(b, 2) - 4 * a * c;

    if (result > 0) {
        result1 = (-b + result) / 2 * a;
        result2 = (-b + -result) / 2 * a;
        printf("%lf\n%lf", result1, result2);
    }
    else {
        printf("근이 없다.");
    }
}
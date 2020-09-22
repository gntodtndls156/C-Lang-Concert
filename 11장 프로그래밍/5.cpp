/* 
두 개의 복소수를 더하는 프로그램을 작성해보자.
a+bi와 c+di의 덧셈은 다음과 같다.

(a + bi) + (c + di) = (a + c) + (b + d)i

복소수는 구조체를 사용하여 표현해보자.
 */

#include <stdio.h>

typedef struct NUM {
    double num1, num2;
}num;

int main(void) {
    num n;
    printf("첫번째 복소수를 입력하시오 (a, b): ");
    scanf_s("%lf %lf", &n.num1, &n.num2);

    printf("두번째 복소수를 입력하시오 (a, b): ");
    num n2;
    scanf_s("%lf %lf", &n2.num1, &n2.num2);

    printf("%.1lf + %.1lfi", n.num1 + n2.num1, n.num2 + n2.num2);

    return 0;
}
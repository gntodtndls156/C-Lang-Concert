/* 
다음을 계산하는 재귀적인 프로그램을 작성하시오.

ax^2 + bx + c = 0
 */

#include <stdio.h>
#include <math.h>

int x(int num);

int main(void) {
    int num;
    printf("정수를 입력하시오: ");
    scanf_s("%d", &num);

    printf("%d", x(num));
}

int x(int num) {
    if (num == 1) return 1;

    return pow(num, 3) + x(num - 1);
}
/* 
사용자로부터 정수를 받아서 홀수인지 짝수인지를 출력하는 프로그램을 작성하라.
 */

#include <stdio.h>

int main(void) {
    int number;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &number);

    printf("%d은 %s입니다.", number, (number % 2) == 0 ? "짝수" : "홀수");

    return 0;
}
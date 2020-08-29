/* 
세 자리로 이루어진 숫자를 입력받은 후에 각각의 자리수를 분리하고 이 자리수를 출력하는 프로그램을 작성하라.
 */

#include <stdio.h>

int main(void) {

    int num;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &num);

    printf("백의 자리수: %d\n십의 자리수: %d\n일의 자리수: %d", num / 100, (num / 10) % 10, (num % 100) % 10);
}
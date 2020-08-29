/* 
사용자로부터 정수 x, y를 입력받아서 x에서 y까지의 합을 구하는 프로그램을 작성해보자.
 */

#include <stdio.h>

int main(void) {
    printf("시작정수: ");
    int num1;
    scanf_s("%d", &num1);

    printf("종료정수: ");
    int num2;
    scanf_s("%d", &num2);

    int sum = 0;
    for (int i = num1; i <= num2; i++) {
        sum += i;
    }
    printf("Sum of %d to %d = %d", num1, num2, sum);

    return 0;
}
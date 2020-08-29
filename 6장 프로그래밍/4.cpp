/* 
사용자로부터 정수를 입력받아서 계속 더하는 프로그램을 작성해보자.
사용자가 0을 입력하면 지금까지 입력된 모든 정수의 합계를 출력하고 종료한다.
 */

#include <stdio.h>

int main(void) {
    int number, sum = 0;

    for (int i = 0;;i++) {
        printf("정수를 입력하시오: ");
        scanf_s("%d", &number);

        if (number == 0) {
            printf("합계=%d", sum);
            break;
        }
        sum += number;
        getchar();
    }
}
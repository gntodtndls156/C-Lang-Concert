/* 
중첩 반복문을 사용하여서 다음과 같이 출력하는 프로그램을 작성하여 보자.

Hint: printf()로 정수를 3칸에 출력하려면 %3d를 사용한다.
 */

#include <stdio.h>

int main(void) {
    int number;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &number);

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++)
            printf("%3d ", j);
        printf("\n");
    }

    return 0;
}
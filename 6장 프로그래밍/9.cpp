/* 
사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램을 작성한다.
 */

#include <stdio.h>

int main(void) {

    int number;
    printf("정수를 입력하시오: ");
    scanf_s("%d", &number);

    for (int i = 1; i <= number; i++)
        if (number % i == 0) printf("%d ", i);

    return 0;
}
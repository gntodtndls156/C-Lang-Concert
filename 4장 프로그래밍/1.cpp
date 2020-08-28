/* 
사용자로부터 2개의 정수를 받아서 첫 번째 저수를 두 번째 정수로 나누었을 때의 몫과 나머지를
계산하는 프로그램을 작성하라. 예를 들어서 10과 3이 입력되면 몫으로 3, 나머지로는 1이 출력되어야 한다.
 */

#include <stdio.h>

int main(void) {
    printf("첫 번째 정수를 입력하시오: ");
    int number1;
    scanf_s("%d", &number1);

    printf("두 번째 정수를 입력하시오: ");
    int number2;
    scanf_s("%d", &number2);

    printf("몫은 %d이고 나머지는 %d입니다", (number1 / number2), (number1 % number2));

    return 0;
}
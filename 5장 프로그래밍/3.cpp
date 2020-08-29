/* 
사용자로부터 입력받은 두수의 합과 차를 구하여 출력하여 보자. 두수의 차는 큰 수에서 작은 수를 뺀 것으로 한다. 
*/

#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &num1);
    getchar();
    printf("정수를 입력하시오: ");
    scanf_s("%d", &num2);

    printf("두수의 합은 %d입니다.", num1 + num2);
    printf("두수의 합은 %d입니다.", (num1 > num2) ? num1 - num2 : num2 - num1);

    return 0;
}
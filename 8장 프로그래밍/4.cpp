/* 
주어진 정수의 약수를 모두 찾아내는 함수 get_divisor()를 작성하여 보라.
만약 8이 주어지면 1, 2, 4, 8을 화면에 출력하여야 한다.
이 함수를 테스트하기 위한 main()를 작성하시오.
 */

#include <stdio.h>

void get_divisor(int num);

int main(void) {
    printf("정수를 입력하세요: ");
    int number;
    scanf_s("%d", &number);

    printf("%d의 약수=", number);
    get_divisor(number);

    return 0;
}

void get_divisor(int num) {
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) printf("%d ", i);
    }
}
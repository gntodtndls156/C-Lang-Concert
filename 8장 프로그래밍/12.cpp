/* 
재귀 호출을 이용하여 정수의 각 자리수를 출력하는 함수 show_digit(int x)를 작성하고 테스트하라. 즉 정수가 1234이면 화면에 1 2 3 4와 같이 출력한다.
함수는 일의 자리를 출력하고 나머지 부분을 대상으로 다시 같은 함수를 재귀 호출한다.
예를들어서 1234의 4를 출력하고 나머지 123을 가지고 다시 같은 함수를 재귀 호출한다.
1234를 10으로 나누면 123이 되고 4는 1234를 10으로 나눈 나머지다.
 */

#include <stdio.h>

int show_digit(int x);

int main(void) {
    printf("정수를 입력하시오: ");
    int num;
    scanf_s("%d", &num);

    //printf("%d ", show_digit(num));
    show_digit(num);

    return 0;
}

int show_digit(int x) {
    if (x > 10) {
        show_digit(x / 10);
        printf("%d ", x % 10);
    }
    else {
        printf("%d ", x);
    }

    //printf("%d ", x % 10);
    return 0;
}
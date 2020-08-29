/* 
1단부터 9단까지의 구구단을 2차원 배열에 저장한다.
사용자로부터 구구단 중의 하나를 받아서 2차원 배열에서 찾는다.
찾은 결과를 화면에 출력하는 프로그램을 작성한다.

`` 1단부터 9단까지의 구구단을 저장하려면 배열의 크기를 10x10으로 하는 것이 좋다.
 */

#include <stdio.h>

int main(void) {
    int gugudan[10][10];

    for (int i = 0; i < 10;i++) {
        for (int j = 0; j < 10; j++) {
            gugudan[i][j] = i * j;
        }
    }

    printf("알고싶은 구구단을 입력하시오(ex: 9 3): ");
    int num1, num2;
    scanf_s("%d %d", &num1, &num2);

    printf("%d x %d = %d", num1, num2, gugudan[num1][num2]);
    return 0;
}
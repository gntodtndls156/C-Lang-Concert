/* 
사용자로부터 3개의 정수를 받아서 변수 x, y, z에 저장하고 다음과 같은 수식의 결과를 출력하는 프로그램을 작성하라.
예를 들어서 사용자가 1, 2, 3을 입력하였다면, 1 * 2 - 3 = -1를 출력하면 된다.
즉 x * y - z
 */
#include <stdio.h>

int main(void) {
    int x, y, z;

    printf("정수를 3개 입력하시오: ");
    scanf_s("%d %d %d", &x, &y, &z);

    printf("%d*%d-%d = %d", x, y, z, x * y - z);
}
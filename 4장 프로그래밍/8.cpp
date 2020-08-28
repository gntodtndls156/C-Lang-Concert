/* 
2차원 공간에서 두 점 사이의 거리를 계산하는 프로그램을 작성한다.
두 점은 사용자로부터 정수로 받는다.
제곱근의 계산은 math.h에 정의된 sqrt(double x) 함수를 사용한다.

`` 9.0의 제곱근은 다음과 같이 계산할 수 있다. 
`` double r = sqrt(9.0);
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    int x1, x2, y1, y2;

    printf("첫번째 점 (x1, y1): ");
    scanf_s("%d %d", &x1, &y1);

    getchar();

    printf("두번째 점 (x2, y2): ");
    scanf_s("%d %d", &x2, &y2);

    double r = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("Distance= %f", r);
}
/* 
두 점사이의 거리를 계산하는 함수를 작성하여 보자.
2차원 공간에서 두 점 (x1, y1)와 (x2, y2) 사이의 거리를 계산하는 dist_2d()를 작성하시오.
다음과 같은 두 점 사이의 거리를 계산하는 공식을 사용하라.

d = \sqrt{(x_1 - x_2)^2 + (y_1 - y_2)^2}
 */

#include <stdio.h>
#include <math.h>

float dist_2d(int x1, int y1, int x2, int y2);

int main(void) {
    printf("첫번째 점의 좌표를 입력하시오: (x, y)");
    int x1, y1;
    scanf_s("%d %d", &x1, &y1);

    printf("두번째 점의 좌표를 입력하시오: (x, y)");
    int x2, y2;
    scanf_s("%d %d", &x2, &y2);

    printf("두점 사이의 거리는 %f입니다.", dist_2d(x1, y1, x2, y2));

    return 0;
}

float dist_2d(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
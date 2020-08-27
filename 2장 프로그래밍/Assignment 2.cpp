/* 
가로, 세로의 길이(cm)를 입력받아, 사각형의 둘레와 넓이를 계산하여 출력하는 프로그램을 작성하라.
가로의 길이: 10
세로의 길이: 20

사각형의 둘레: 60
사각형의 넓이: 200
 */
#include <stdio.h>

int main(void) {
    int x;
    int y;

    printf("가로의 길이: ");
    scanf("%d", &x);

    getchar();
    printf("세로의 길이: ");
    scanf("%d", &y);

    printf("\n사각형의 둘레: %d \n", (x + y) * 2);
    printf("사각형의 넓이: %d ", x * y);
    return 0;
}
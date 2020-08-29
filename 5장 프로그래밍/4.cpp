/* 
삼각형의 세 변의 길이를 입력받아서 삼각형의 종류를 결정하는 프로그램을 작성하라. 많은 종류 중에서 정삼각형, 이등변 삼각형만 구별해보자.
 */

#include <stdio.h>

int main(void) {
    printf("삼각형의 세 변의 길이를 입력하시오: ");
    int x, y, z;
    scanf_s("%d %d %d", &x, &y, &z);

    if (z == x && x == y) {
        printf("정 삼각형");
    }
    else if (y != z && x == y || x == z) {
        printf("이등변 삼각형");
    }
    else {
        printf("일반 삼각형");
    }
}
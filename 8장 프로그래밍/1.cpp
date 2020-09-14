/* 
f(x, y) = 1.5 * x + 3.0 * y를 계산하는 함수를 작성하고 테스트해본다.
 */

#include <stdio.h>

void xy(float x, float y);

int main(void) {
    // printf("x= %.1f, y=%.1f, f(x, y)=%.6f", 1.0, 1.0, xy(10, 10));
    xy(1, 1);
    xy(2, 1);
    xy(1, 2);

    return 0;
}

/* float */void xy(float x, float y) {

    printf("x=%.1f, y=%.1f, f(x, y)=%.6f\n", x, y, 1.5 * x + 3.0 * y);
    //return 1.5 * x + 3.0 * y;
}
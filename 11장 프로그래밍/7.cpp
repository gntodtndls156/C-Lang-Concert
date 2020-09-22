/* 
삼각형, 사각형, 원을 동시에 표현할 수 있는 공용체를 설계하라.
삼각형은 밑변과 높이, 사각형은 가로와 세로, 원은 반지름만을 저장하도록 하라.
현재의 공용체가 표현하고 있는 도형의 종류는 열거형 변수를 사용하여 나타낸다.
사용자로부터 도형의 종류와 도형의 데이터를 받아서 도형의 면적을 계산하는 프로그램을 작성하라.
 */

#include <stdio.h>
#include <math.h>

enum e_FIGURE { triangle, square, circle };

struct s_FIGURE {
    short num;

    union {
        struct {
            int base, height;
        } tri;
        struct {
            int width, height;
        } squ;
        struct {
            int radius;
        } cir;
    };

    int result;
};

int main(void) {
    printf("도형의 타입을 입력하시오(0, 1, 2): ");
    int num;
    scanf_s("%d", &num);

    if (num < 0 && num > 2) {
        printf("숫자가 작거나 큽니다. 최소 0, 최대 2");
        return 0;
    }

    struct s_FIGURE figure;

    switch (num) {
    case triangle:
        printf("밑변과 반지름을 입력하시오(예를 들어서 100 200): ");
        scanf_s("%d %d", &figure.tri.base, &figure.tri.height);
        figure.result = 0.5 * figure.tri.base * figure.tri.height;
        break;
    case square:
        printf("가로와 세로를 입력하시오(예를 들어서 5 20): ");
        scanf_s("%d %d", &figure.squ.width, &figure.squ.height);
        figure.result = figure.squ.width * figure.squ.height;
        break;
    case circle:
        printf("원의 반지름을 입력하시오(예를 들어서 3): ");
        scanf_s("%d", &figure.cir.radius);
        figure.result = 3.14 * pow(figure.cir.radius, 2);
        break;
    }

    printf("면적은 %d", figure.result);

    return 0;
}
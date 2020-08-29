/* 
이차방정식 ax^2 + bx + c = 0의 근을 계산하는 프로그램을 작성해보자.

1. 사용자에게 이차 방정식의 계수 a, b, c를 입력하도록 한다.
2. 만약 a가 0이면 근은 -c/b이다.
3. 만약 판별식 b^2 - 4ac가 음수이면 실근은 존재하지 않는다.
4. 위의 조건에 해당되지 않으면 다음과 같은 공식을 이용하여 실근을 구한다. (x= (-b ± sqrt(b^2 - 4ac)) / (2a))
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    printf("계수 a를 입력하시오: ");
    double a;
    scanf_s("%lf", &a);

    getchar();

    printf("계수 b를 입력하시오: ");
    double b;
    scanf_s("%lf", &b);

    getchar();

    printf("계수 c를 입력하시오: ");
    double c;
    scanf_s("%lf", &c);

    if (a == 0)
        printf("위의 이차 방정식의 실근은 %.2lf 입니다.", -c / b);
    else if (0 > sqrt(pow(b, 2) * 2 - (4 * a * c)))
        printf("위의 이차 방정식의 실근은 존재하지 않습니다.");
    else {
        printf("위의 이차 방정식의 실근은 %.2lf과 %.2lf입니다.", (-b - sqrt(pow(b, 2) - 4 * a * c)) / (a * 2), (-b + sqrt(pow(b, 2) - 4 * a * c)) / (a * 2));
    }

}
/* 
2차 방정식의 근을 계산하는 함수를 작성하고 이 함수를 호출하여서 2차 방정식의 근을 출력하는 프로그램을 작성해보자.
매개 변수로 포인터를 사용하면 함수가 2개 이상의 값을 반환할 수 있다.
다음과 같이 두 개의 근을 모두 포인터를 이용하여서 반환하도록 한다.

x = { -b \pm \sqrt{b^2 - 4ac} \over 2a}

공식: 
void quadratic (int a, int b, int c ,double* xplus, double* xminus) {
    *xminus = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
    *xplus = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
}
 */

#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double* xplus, double* xminus);

int main(void) {
    int a = 1, b = 4, c = 3;
    double xplus, xminus;

    quadratic(a, b, c, &xplus, &xminus);

    printf("첫 번째 실근: %lf\n", xplus);
    printf("두 번째 실근: %lf", xminus);
}

void quadratic(int a, int b, int c, double* xplus, double* xminus) {
    *xminus = (-b - sqrt(b * b - 4 * a * c)) / (2 * a); 
    *xplus = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}
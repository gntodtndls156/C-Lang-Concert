/* 
면적의 단위인 제곱미터를 평으로 환산하는 프로그램을 작성하시오. 여기서 1평은 3.3058m^2이다.
변수들의 자료형은 어떤 것을 선택하는 것이 좋은가?
기호 상수를 이용하여 1제곱미터 당 평을 나타내어라.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    float xy, pyung;

    printf("면적을 제곱미터 단위로 입력하시오: ");
    scanf("%f", &xy);

    pyung = xy / 3.3058;
    printf("%.2f제곱미터는 %.2f평입니다.", xy, pyung);

    return 0;

}
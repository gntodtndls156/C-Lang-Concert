/* 
두수 중에서 더 큰 수를 반환하는 함수 get_bigger()를 다음과 같이 작성하고 이것을 이용해서 사용자로부터 받은 실수 두 개 중에서 더 큰 수를 출력하는 프로그램을 작성해본다.
 */

#include <stdio.h>

float get_bigger(float one, float two);

int main(void) {
    printf("실수를 입력하시오: ");
    float num1;
    scanf_s("%f", &num1);

    printf("실수를 입력하시오: ");
    float num2; 
    scanf_s("%f", &num2);

    printf("더 큰수는 %.6f입니다.", get_bigger(num1, num2));

    return 0;
}

float get_bigger(float one, float two) {
    if (one > two) return one;
    else if (two > one) return two;
    else return -1;
}
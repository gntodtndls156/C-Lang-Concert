/* 
근로 소득세를 계산하는 프로그램을 작성해보자. 근로 소득세율은 다음 표와 같다.

1000만 원 이하                  | 8%
1000만 원 초과 4000만 원 이하   | 17%
4000만 원 초과 8000만 원 이하   | 26%
8000만 원 초과                  | 35%
 */

#include <stdio.h>

int main(void) {
    int price = 0;

    printf("과세 표준을 입력하시오(만원 단위): ");
    scanf_s("%d", &price);

    if (1000 >= price)
        price *= 0.08;
    else if (price >= 1001 && price <= 4000)
        price *= 0.17;
    else if (price >= 4001 && price <= 8000)
        price *= 0.26;
    else
        price *= 0.35;

    printf("소득세는 %d만원입니다.", price);
}
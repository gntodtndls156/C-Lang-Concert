/* 
자동차의 연로 탱크 프로그램을 시뮬레이션하여 보자.
초기값이 1000리터이고 사용자가 주행을 하면 연료가 줄어든다.
반복문을 사용하여서 사용자로부터 충전 또는 사용한 연료를 입력받아서 연로 탱크에 남아 있는 연로가 10% 미만이면 경로를 출력한다.
 */

#include <stdio.h>

int main(void) {
    double number, fuel = 1000;

    for (int i = 0; ;i++) {
        printf("연료충전은 +, 연료소모는 -로 입력해주세요.");
        scanf_s("%lf", &number);

        fuel += number;

        printf("\n현재 남아있는 양은 %lf입니다.\n", fuel);

        if (100 >= fuel) {
            printf("\n\n(경고) 연로가 10%퍼 이하입니다.");
            break;
        }
        getchar();
    }
}
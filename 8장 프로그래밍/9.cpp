/* 
난수 생성 함수를 이용하여 컴퓨터로 여러가지 문제를 시뮬레이션하는 것을 흔미 모테 까를로*(Monte Carlo)* 시뮬레이션이라고 한다. 간단한 동전 던지기 게임을 시뮬레이션 하자.

1. 컴퓨터가 동전을 던지고 사용자는 앞 뒤를 말한다.
2. 컴퓨터는 난수 생성 함수를 이용하여 난수를 생성한 후에 난수가 짝수이면 동전의 앞면으로 간주하고 홀수이면 동전의 뒷면으로 간주한다.
3. 이것을 몇 번 반복하여 승패를 기록한다.
 */

#include <stdio.h>
#include <stdlib.h>

bool Throw();

int main(void) {
    bool computer, user;
    int win = 0, lose = 0;

    while (1) {
        printf("앞(0) 또는 뒤(1)를 선택하시오 (종료는 -1): ");
        int answer;
        scanf_s("%d", &answer);

        computer = Throw();
        if (answer > 1 || answer < -1) {
            printf("틀린 숫자입니다.\n");
            continue;
        }
        else if (answer == -1) {
            printf("종료하겠습니다.");
            break;
        }
        else {
            if (computer == answer) {
                printf("컴퓨터가 이겼습니다.");
                lose++;
            }
            else if (computer != answer) {
                printf("사용자가 이겼습니다.");
                win++;
            }
            else {
                printf("에러 발생");
                continue;
            }
            printf("\n");
        }
    }
    return 0;
}

bool Throw() {
    return rand() % 2;
}
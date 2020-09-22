/* 
열거형을 사용하여 사람과 컴퓨터 사이의 가위, 바위, 보 게임을 구현해보자.
 */

#include <stdio.h>
#include <stdlib.h>

enum e { s = 0, r = 1, p = 2 };

int main(void) {
    enum e em;

    printf("가위(0), 바위(1), 보(2)를 입력하세요: ");
    int num;
    scanf_s("%d", &em);

    num = rand() % 3;

    if (num == em) printf("비겼습니다.");
    else if (num < (em + 1) % 3) printf("컴퓨터가 졌습니다.");
    else printf("컴퓨터가 이겼습니다.");

    return 0;
}
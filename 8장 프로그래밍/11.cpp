/* 
돈만 생기면 저금하는 사람을 가정하자. 이 사람을 위한 함수 `save(int amount)`를 작성해보자.
이 함수는 저금할 금액을 나타내는 하나의 인수 *amount*만을 받으며 `save(100)`과 같이 호출된다.
`save()`는 현재까지 저축된 총액을 기억하고 있으며 한 번 호출될 때마다 총 저축액을 화면에 출력한다.

1. 전역 변수를 사용하여 구현하라.
2. 정적 지역 변수를 사용하여 구현하라.
3. 예금 인출을 나타내는 함수 `draw(int amount)`도 작성해보자.
`save()`와 `draw()`를 동시에 사용하려면 저금액은 어떤 종류의 변수로 표현해야 하는가?
 */

#include <stdio.h>

int sum = 0;

void save(int m) {
    sum += m;
    printf("지금까지의 저축액은 %d입니다. \n", sum);
}

void draw(int am) {
    sum += am;
    printf("지금까지의 저축액은 %d입니다. \n", sum);
}

int main(void) {
    while (1) {
        int num;
        printf("얼마를 저축하시겠습니까? (종료는 -1): ");
        scanf_s("%d", &num);

        if (num == -1) break;
        else if ((num < 0) && (num != -1)) draw(num);
        else save(num);
    }
    return 0;
}
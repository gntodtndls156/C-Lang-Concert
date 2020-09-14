/* 
거듭제곱을 계산하는 함수를 작성하여 보자.
정수 n과 k를 받아서 n^k 승을 계상하는 함수 ipower() 함수를 작성한다.
이 함수를 호출하여 3^0부터 3^5까지의 값을 테이블의 형태로 출력하는 프로그램을 작성하시오.
 */

#include <stdio.h>

int prime(int num);

int main(void) {
    for (int i = 2; i <= 100; i++) {
        if (!(prime(i) == 0))
            printf("%d ", prime(i));
    }
}

int prime(int num) {
    int i;
    for (i = 2; i <= num; i++) {
        if (num % i == 0)
            break;
    }
    if (num == i)
        return num;

    return false;
}
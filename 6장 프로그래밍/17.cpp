/* 
사용자가 입력한 수가 소수인지 아닌지를 출력하는 프로그램을 작성하라.
소수는 1과 자기 자신이외에는 약수를 가지지 않아야 한다.
약수는 % 연산자를 이용하여서 검사할 수 있다. 즉 i가 5의 약수라면 i % 5가 0이 된다.
 */

#include <stdio.h>

int main(void) {
    int number, i, chk = 0;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &number);

    for (i = 2; i < number; i++) {
        if ((number % i) == 0)
            chk = 1;
    }

    if (chk == 0) {
        printf("%d은 소수가 맞습니다.", number);
    }
    else {
        printf("%d은 소수가 아닙니다.", number);
    }

    return 0;
}
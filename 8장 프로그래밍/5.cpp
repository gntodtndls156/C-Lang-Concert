/* 
주어진 정수가 소수(prime number)인지를 검사하는 함수 prime()을 작성하라.
이 함수를 이용하여 1부터 100 사이에 존재하는 소수들을 모두 출력하라.
하나의 힌트는 소수라면 1과 자기 자신을 제외한 약수를 가지면 안 된다.
따라서 만약 정수 n이 소수인지를 검사하려면 2부터 n-1까지의 숫자로 n을 나누어서 나누어 떨어지지 않으면 소수이다.
 */

#include <stdio.h>

int prime(int num);

int main(void) {
    for (int i = 2; i <= 100; i++) {
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
}
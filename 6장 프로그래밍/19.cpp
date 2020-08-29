/* 
피보나치 수열을 계산하는 프로그램을 작성해보자. 
피보나치 수열은 0과 1부터 시작하며 앞의 두 수를 더하여 뒷 수를 만든다. 
0 0 1 2 3 5 8 13 21 34 . . . .
 */

#include <stdio.h>

int fib(int number);

int main(void) {
    int number;

    printf("몇번째 항까지 구할까요? ");
    scanf_s("%d", &number);


    for (int i = 0; i <= number; i++) {
        printf("%d, ", fib(i));
    }
}

int fib(int number) {
    int i, temp = 0, cur = 1, last = 0;

    for (i = 0; i < number; i++) {
        last = temp + cur;
        temp = cur;
        cur = last;
    }

    return temp;
}
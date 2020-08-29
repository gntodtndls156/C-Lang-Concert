/* 
0부터 9까지의 난수를 100번 생성하여 가장 많이 생성된 수를 출력하는 프로그램을 작성하시오.
난수는 rand() 함수를 사용하여 생성하라. 배열을 사용해보자.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num[10];
    int term, many = 0;

    for (int i = 0; i < 100; i++) {
        term = rand() % 10;
        num[term]++;
    }

    for (int i = 0; i < 10; i++) {
        if (num[i] > num[many])
            many = i;
    }
    printf("가장 많이 생성된 수= %d", many);
    return 0;
}
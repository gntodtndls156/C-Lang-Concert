/* 
1부터 100가지의 자연수 중에서 3의 배수를 출력하여 보자.
 */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int k = 1; k <= 7 - i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/* 
다음과 같은 추력을 생성하는 프로그램을 작성해보자.
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
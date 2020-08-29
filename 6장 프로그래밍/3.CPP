/* 
아스키 코드 표를 출력하는 프로그램을 작성해보자.
 */

#include <stdio.h>

int main(void) {
    for (int i = 0; i <= 127; i++)
        printf("%d: %c\n", i, i);

    return 0;
}
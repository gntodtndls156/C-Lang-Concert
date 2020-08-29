/* 
주사위를 60000번 던져서 그 결과를 배열로 요약해보자.
잘 만들어진 주사위라면 하나의 면이 나올 확률은 약 1/6이 되어야 한다.
컴퓨터에서 주사위 던지기는 난수 발생 함수 rand()를 통하여 구현하라.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num[6] = { 0, };
    int temp;

    for (int i = 0; i < 60000; i++) {
        temp = (rand() % 6);
        num[temp]++;
    }

    printf("================================\n주사위면\t\t빈도\n================================\n");
    for (int i = 0; i < 6; i++) {
        printf("    %d\t\t\t%d\n", i + 1, num[i]);
    }
    return 0;
}
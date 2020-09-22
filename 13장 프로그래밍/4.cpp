/* 
정수 100개를 저장할 수 잇는 동적 메모리를 할당받고 여기에 0부터 99사이의 난수를 저장한다.
난수들의 평균을 계산하여 화면에 출력하는 프로그램을 작성해보자.

Hint: 난수는 rand() 함수를 하면 된다.
Hint: 0부터 99 사이의 난수는 rand() % 100으로 생성할 수 있다. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* num = (int*)malloc(sizeof(int) * 101);
    int SUM = 0, AVG;

    for (int i = 0; i < 100; i++) {
        num[i] = rand() % 100;
        SUM += num[i];
    }
    AVG = SUM / 100;
    printf("평균=%d", AVG);
}
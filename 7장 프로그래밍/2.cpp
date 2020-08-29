/* 
사용자로부터 5개의 정수를 입력받아서 1차원 배열에 저장한다.
1차원 배열에서 최댓값과 최솟값을 계산해서 출력해보자.

`` 배열의 요소로 입력받을 때는 scanf("%d", &a[1])과 같은 문장을 사용한다.
 */

#include <stdio.h>

int main(void) {
    int number[5], max = 0, min = _CRT_INT_MAX;
    for (int i = 0; i < 5; i++) {
        printf("정수를 입력하세요: ");
        scanf_s("%d", &number[i]);

        if (number[i] > max) {
            max = number[i];
        }
        else if (number[i] < min) {
            min = number[i];
        }
    }
    printf("최대값= %d 최소값= %d", max, min);
    return 0;
}
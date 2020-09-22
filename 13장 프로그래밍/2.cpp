/* 
사용자가 입력한 n개의 실수의 합을 계산하기 위한 C 프로그램을 작성하라.
malloc() 함수를 사용하여 메모리를 동적으로 할당하여 사용한다.

Hint: 본문에 있는 예제 프로그램은 동적 메모리에 저장된 정수의 합을 계산하는 문제이고 이 문제에서는 실수를 저장하여야 한다.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("요소의 개수: ");
    int Count;
    scanf_s("%d", &Count);

    float* fnum = (float*)malloc(sizeof(float) * Count);
    float sum = 0;
    for (int i = 0; i < Count; i++) {
        printf("배열의 요소를 입력하시오: ");
        scanf_s("%f", &fnum[i]);
        sum += fnum[i];
    }

    printf("합 = %f", sum);

    return 0;
}
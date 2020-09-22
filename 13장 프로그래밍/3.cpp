/* 
사용자가 입력한 n개의 실수를 동적 할당 메모리에 저장한다.
저장된 실수 중에서 최대 값을 찾는 C 프로그램을 작성하라.

Hint: 이 문제에서도 실수 중에서 최대 값을 찾아야 한다.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("요소의 개수: ");
    int num;
    scanf_s("%d", &num);

    double* pi = (double*)malloc(sizeof(double) * num);
    double MAX = 0;

    for (int i = 0; i < num; i++) {
        printf("요소 %d: ", i + 1);
        scanf_s("%lf", &pi[i]);
        if (pi[i] > MAX) {
            MAX = pi[i];
        }
    }

    printf("최대값 = %lf", MAX);

}
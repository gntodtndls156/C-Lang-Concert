/* 
포인터를 이용하여서 크기가 5인 1차원 정수 배열에 저장된 값을 역순으로 출력해보자.
 */

#include <stdio.h>

int main(void) {
    int* p_arr[5] = { 0, };

    printf("5개의 정수를 입력하시오: ");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &p_arr[i]);
    }

    printf("역순: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", p_arr[i]);
    }

    return 0;
}
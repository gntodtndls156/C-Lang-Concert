/* 
1차원 배열을 받아서 배열 요소들의 합을 계산하는 int get_array_sum(int *A, int size)을 구현하고 int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };을 가지고 테스트하라
 */

#include <stdio.h>

int get_array_sum(int* A, int size);

int main(void) {

    int data[10] = { 1,2,3,4,5,6,7,8,9 };

    printf("\n배열 요소의 합 = %d", get_array_sum(data, 10));

    return 0;
}

int get_array_sum(int* A, int size) {
    int sum = 0;
    printf("print_array()\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
        sum += *(A + i);
    }

    return sum;    
}
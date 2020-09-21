/* 
1^2 + 2^2 + 3^2 + . . . n^2의 값을 계산하여 출력하여 보자.

Hint: i를 1부터 n까지 증가시키면서 result에 i * i를 더한다.
Hint: result의 초기값은 0이어야 한다.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    int n, sum = 0;

    printf("n의 값을 입력하세요: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += pow(i, 2);
    }

    printf("%d", sum);
}
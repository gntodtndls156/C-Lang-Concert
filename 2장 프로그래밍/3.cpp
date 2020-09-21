/* 
사용자로부터 세 개의 정수를 입력받은 후,
평균값을 계산하여 화면에 출력하는 프로그램을 작성하라.

Hint: scanf("%d", &x); 와 같은 문장으로 점수를 입력받을 수 있다.
 */
#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    printf("정수를 입력하시오: ");
    scanf("%d", &n1);

    printf("정수를 입력하시오: ");
    scanf("%d", &n2);

    printf("정수를 입력하시오: ");
    scanf("%d", &n3);

    printf("평균은 %d입니다.", (n1 + n2 + n3) / 3);

    return 0;
}
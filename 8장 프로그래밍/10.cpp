/* 
덧셈, 뺄셈, 곱셈, 나눗셈을 지원하는 계산기 프로그램을 작성하여 보자.
이번에는 각 연산들이 몇 번씩 계산되었는지를 기억하게 하자.
각 연산을 지원하는 함수들은 자신이 호출된 횟수를 화면에 출력한다.

1. 정적 지역 변수를 사용하여 프로그램을 작성하라.
2. 전역 변수를 사용하여 프로그램을 작성하라.
 */

#include <stdio.h>

int sumf(int n1, int n2);
int subf(int n1, int n2);
int mulf(int n1, int n2);
int divf(int n1, int n2);

int main(void) {
    int n1, n2;
    char ch;

    while (1) {
        printf("연산을 입력하시오 (종료는 Ctrl+c): ");
        scanf_s("%d %c %d", &n1, &ch, &n2);

        switch (ch) {
        case '+':
            printf("%d", sumf(n1, n2));
            break;
        case '-':
            printf("%d", subf(n1, n2));
            break;
        case '*':
            printf("%d", mulf(n1, n2));   
            break;
        case '/':
            printf("%d", divf(n1, n2));
            break;
        }
        n1, n2 = 0;
        ch = NULL;
    }

    return 0;
}

int sumf(int n1, int n2) {
    static int sum = 1;
    printf("덧셈은 총 %d번 호출되었습니다.", sum++);
    return n1 + n2;
}
int subf(int n1, int n2) {
    static int sub = 1;
    printf("뺄셈은 총 %d번 호출되었습니다.", sub++);
    return n1 - n2;
}
int mulf(int n1, int n2) {
    static int mul = 1;
    printf("곱셈은 총 %d번 호출되었습니다.", mul++);
    return n1 * n2;
}
int divf(int n1, int n2) {
    static int div = 1;
    printf("나눗셈은 총 %d번 호출되었습니다.", div++);
    return n1 / n2;
}
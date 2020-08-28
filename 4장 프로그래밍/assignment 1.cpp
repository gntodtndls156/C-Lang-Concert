/* 
두 수의 입력받아서 둘 중 작은 수를 구하여 출력하는 프로그램을 작성하세요.
단, 두 수가 같으면 '같음'을 출력합니다. 그리고 조건 연사자를 이용하세요.
* 교과서 p. 171 172
* 조건 연산자는 (x > y) ? x : y;
 */

#include <stdio.h>
int main() {
    int x, y;

    printf("input: ");
    scanf_s("%d %d", &x, &y);

    printf("%d", x > y ? printf("실행 결과: %d", y) : y > x ? printf("실행 결과: %d", x) : x == y ? printf("같음\n") : printf("문제 발생\n"));

    return 0;
}
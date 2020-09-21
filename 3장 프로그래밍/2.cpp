/*
사용자에게 받은 문자의 아스키 코드를 출력하는 프로그램을 작성하시오.

Hint:문자는 아스키 코드라는 숫자로 컴퓨터 내부에서 표현된다. 문자를 %c로 받아서 char형 변수에 저장한 후에 %d로 출력하면 된다.
 */
#include <stdio.h>

int main(void) {
    printf("문자를 입력하시오: ");
    char ch;
    scanf_s("%c", &ch, sizeof(ch));

    printf("아스키 코드: %d", ch);

    return 0;
}
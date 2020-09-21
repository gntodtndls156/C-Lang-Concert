/* 
사용자로부터 문자를 입력받아서 그 문자의 아스키 코드 값을 출력하는 프로그램을 작성하라.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    printf("문자를 입력하세요: ");
    char ch;
    scanf_s("%c", &ch, sizeof(ch));

    printf("아스키 코드는 %d 이다.", ch);
}
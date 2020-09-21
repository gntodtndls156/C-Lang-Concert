/* 
사용자로부터 받은 문자열이 회문인지를 점검하는 프로그램을 작성하라.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    printf("문자열을 입력하세요: ");
    char ch[100];
    gets_s(ch, 99);
    bool check = true;

    for (int i = 0; i < strlen(ch) / 2; i++) {
        if (ch[i] != ch[strlen(ch) - 1 - i])
            check = false;
    }

    if (check) {
        printf("회문이 맞습니다.");
    } else
        printf("회문이 아닙니다.");

    return 0;
}
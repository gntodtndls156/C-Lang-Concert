/* 
사용자로부터 암호를 입력받는다.
사용자의 암호가 해킹에 대한 안전도가 강력한지를 검사한다.
만약 암호 안에 대문자, 소문자, 숫자가 모두 들어있으면 강력한 암호로 간주한다.
만약 사용자의 암호가 3가지 종류의 문자를 다 가지고 있지 않으면 프로그램은 보안을 위하여 더 강력한 암호를 고려하라고 제안한다.
 */

#include <stdio.h>

int main(void) {
    char psw[100];
    int num, ch, CH;

    while (true) {
        num = 0, ch = 0, CH = 0;
        printf("암호를 생성하시오: ");
        scanf_s("%s", &psw, sizeof(psw));

        for (int i = 0; i < 100; i++) {
            if (psw[i] == '\n') break;
            if ('a' <= psw[i] && 'z' >= psw[i]) ch++;
            else if ('A' <= psw[i] && 'Z' >= psw[i]) CH++;
            else if ('0' <= psw[i] && '9' >= psw[i]) num++;
        }

        if (ch > 0 && CH > 0 && num > 0) break;
        else {
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
            continue;
        }
    }

    printf("적정한 암호입니다.");
    return 0;
}
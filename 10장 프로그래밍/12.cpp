/* 
문자열을 입력으로 받아서 문자열에 포함된 모든 공백 문자를 삭제하는 함수를 작성하고 테스트하라.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    printf("문자열을 입력하세요: ");
    char ch[101];
    gets_s(ch, 99);

    for (int i = 0; i < strlen(ch); i++) {
        if (ch[i] == ' ') {
            strcpy(&ch[i], &ch[i + 1]);
            i--;
        }
    }

    printf("테스트 결과: %s", ch);
    return 0;
}
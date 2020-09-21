/* 
간단한 절차 교정 프로그램을 작성해보자.
문장의 끝에 마침표가 존재하는지를 검사한다.
역시 마침표가 없으면 넣어준다.
또한 문자열의 첫 번재 문자가 대문자인지를 검사한다.
만약 대문자가 아니면 대문자로 변환한다.
즉 입력된 문자열 이 "pointer is easy"라면 "Pointer is easy."로 변환하여 화면에 출력한다.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    printf("텍스트 입력하시오: ");
    char ch[100];
    gets_s(ch, 99);

    int chlen = strlen(ch);

    if (islower(ch[0])) ch[0] = toupper(ch[0]);
    if (ch[chlen] != '.') {
        ch[chlen] = '.';
        ch[chlen + 1] = '\0';
    }
    printf("결과 텍스트 출력: %s", ch);
    return 0;
}
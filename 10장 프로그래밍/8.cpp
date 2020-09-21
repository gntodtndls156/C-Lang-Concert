/* 
사용자가 입력한 문자열에서 대문자를 솜누자로 변경하는 프로그램을 작성해보자.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    printf("문자열을 입력하세요: ");
    char ch[100];
    gets_s(ch, 99);

    for (int i = 0; i < strlen(ch); i++) {
        ch[i] = tolower(ch[i]);
    }

    printf("%s", ch);
    return 0;
}
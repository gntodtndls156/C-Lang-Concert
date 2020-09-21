/* 
사용자가 입력한 문자열을 거꾸로 하는 프로그램을 작성해보자.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    printf("문자열을 입력하세요: ");
    char ch[100];
    gets_s(ch, 99);

    for (int i = strlen(ch); i >= 0; i--) {
        printf("%c", ch[i]);
    }
    return 0;
}
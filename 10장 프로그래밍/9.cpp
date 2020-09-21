/* 
문자열 안의 단어들의 개수를 세는 프로그램을 작성해보자.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    printf("문자열을 입력하세요: ");
    char ch[100];
    gets_s(ch, 99);

    int count = 0;

    if (isalpha(ch[0])) count++;
    for (int i = 0; i < strlen(ch); i++) if (isalpha(ch[i]) == 0 && isalpha(ch[i + 1]) != 0) count++;

    printf("단어 갯수는 %d", count);

    return 0;
}
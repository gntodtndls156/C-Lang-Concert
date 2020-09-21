/* 
문자열 안에 포함된 문자들의 출현 횟수를 계산하는 프로그램을 작성한다.
예를 들어, 문자열 "abc"이라면 'a', 'b', 'c' 문자가 한 번만 출현한다.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    printf("입력 문자열: ");
    char ch[101];
    int ascii[127] = { 0, };
    scanf_s("%s", &ch, sizeof(ch));


    for (int i = 0; i < 100; i++) {
        ascii[ch[i]]++;
    }

    int chlen = strlen(ch);
    for (int i = 0; i < chlen; i++) {
        if (ascii[ch[i]] == 0)
            continue;
        else {
            printf("%c문자가 %d번 등장하였음!\n", ch[i], ascii[ch[i]]);
            ascii[ch[i]] = 0;
        }
    }
    return 0;
}
/* 
사용자로부터 받은 문자열에서 각각의 문자가 나타나는 빈도를 계산하여 출력하는 프로그램을 작성하시오.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    printf("텍스트를 입력하시오: ");
    char ch[100];
    char ascii[127] = { 0, };
    gets_s(ch, 99);


    int chlen = strlen(ch);
    for (int i = 0; i < chlen; i++)
        ascii[ch[i]]++;
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\t|\t%c: %d\n", 'a' + i, ascii['a' + i], 'A' + i, ascii['A' + i]);
    }
    return 0;
}
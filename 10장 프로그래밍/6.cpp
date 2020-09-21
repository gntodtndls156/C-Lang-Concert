/* 
사용자로부터 텍스트를 입력받아서 텍스트를 모두 대문자로 출력하는 프로그램을 작성해보자.
어떤 라이브러리 함수를 사용하여도 좋다.

Hint: 소문자를 대문자로 변경해주는 toupper() 함수를 사용한다.
Note: toupper() 함수를 쓰기 위해서는 #include <ctype.h> 를 작성하여야 한다.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    printf("텍스트를 입력하시오: ");
    char ch[100];
    gets_s(ch, 99);

    int chlen = strlen(ch);
    for (int i = 0; i < chlen; i++)
        ch[i] = toupper(ch[i]);

    printf("대문자 출력: %s", ch);

    return 0;
}
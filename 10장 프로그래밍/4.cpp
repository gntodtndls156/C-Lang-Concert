/* 
텍스트 안에 포함된 과도한 공백을 없애는 프로그램을 작성해보자.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    printf("텍스트를 입력하시오: ");
    char ch[100];
    gets_s(ch, 99);
    //scanf_s("%[^\n]s", &ch, sizeof(ch));

    for (int i = 0; i < 100; i++) {
        if (ch[i] == ' ' &&  ch[i + 1] == ' ') {
            continue;
        }
        printf("%c", ch[i]);
    }
    return 0;
}
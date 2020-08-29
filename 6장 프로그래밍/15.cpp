/* 
반복적으로 사용자에게서 문자를 받아서 'a'가 나오면 카운터를 하나씩 증가한다. 
사용자가 '.'을 입력하면 반복을 종료하고 입력한 'a'의 총 개수를 출력한다.
문자를 입력받을 때는 scanf("%c", &v) 함수를 사용한다.
 */

#include <stdio.h>

int main(void) {
    char 알파벳= 0;
    int 카운트=0;

    for (int 증감문에쓸변수 = 0; ; 증감문에쓸변수++) {
        printf("문자를 입력하시오: (종료 .) ");
        scanf_s("%c", &알파벳, sizeof(알파벳));

        if (알파벳 == 'a') {
            카운트++;
        }
        else if (알파벳 == '.') {
            break;
        }
        getchar();
    }

    printf("a의 개수=%d", 카운트);

    return 0;
}
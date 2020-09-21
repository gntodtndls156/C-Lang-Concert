/* 
텍스트 안의 모음을 전부 삭제하는 프로그램을 작성해본다.
 */

#include <stdio.h>

int main(void) {

    char ch[100];
    char stop[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

    printf("텍스트를 입력한다: ");
    gets_s(ch, 99);

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 10; j++) {
            if (ch[i] == stop[j])
                for(int k = i; k < 99; k++)
                    ch[k] = ch[k + 1];
        }
    }

    printf("최종 텍스트: %s", ch);
    return 0;
}
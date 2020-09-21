/* 
사용자로부터 비밀 번호를 받아서 화면에 표시하고 미리 정해진 문자열("1234")과 같은지를 검사한다.
비밀번호 입력이 보이지 않도록 getch() 함수와 puch('*')을 사용한다.
 */

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void) {
    char pswed[] = { "1234" };
    char psw[5];

    while (true) {
        printf("비밀번호를 입력하시오: ");
        for (int i = 0; i < 4; i++) {
            psw[i] = _getch();
            _putch('*');
        }

        psw[4] = '\0';

        int result = strcmp(psw, pswed);
        if (result == 0) {
            printf("\n비밀번호 일치");
            break;
        }
        else printf("\n비밀번호가 일치하지 않습니다.\n");
    }
    return 0;
}
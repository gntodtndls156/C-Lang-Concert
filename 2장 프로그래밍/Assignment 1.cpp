/* 
이름, 주소, 전화번호를 입력받아 아래와 같이 화면에 출력하는 프로그램을 작성하세요.
제 이름은 ()이며, ()에 살고 있으며, 연락처는 ()입니다.

`` %s는 문자열 자료형이다.
`` sizeof()는 크기를 측정하는 함수이다.
 */
#include <stdio.h>

int main(void) {
    char name[50]; // 이름
    char address[100]; // 주소
    char phonenumber[100]; // 전화번호

    printf("이름을 입력하시오: ");
    if (0 == scanf("%[^\n]s", &name, sizeof(name))) {
        printf("문자열 입력이 실패했습니다 \n");
    }
    getchar();
    printf("주소를 입력하시오: ");
    if (0 == scanf("%[^\n]s", &address, sizeof(address))) {
        printf("문자열 입력이 실패했습니다 \n");
    }
    getchar();
    printf("전화번호를 입력하시오: ");
    if (0 == scanf("%[^\n]s", &phonenumber, sizeof(phonenumber))) {
        printf("문자열 입력이 실패했습니다 \n");
    }

    printf("제 이름은 %s이며, %s에 살고 있으며, 연락처는 %s입니다.", name, address, phonenumber); 

    return 0;
}
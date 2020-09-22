/* 
구조체를 이용하여 이메일을 표현할 수 있는 구조체를 정의하고,
적당한 초깃값을 부여하여 출력하는 프로그램을 작성하라.
구조체의 멤버는 제목, 수신자, 발신자, 내용, 날짜, 우선순위 등으로 구성된다.
 */

#include <stdio.h>
#include <string.h>

struct EMAIL {
    char title[100] = { 0 };
    char receiver[50] = { 0 };
    char caller[50] = { 0 };
    char content[1000] = { 0 };
    char date[100] = { 0 };
    int priority = 0;
};

int main(void) {
    struct EMAIL user1;

    strcpy_s(user1.title, sizeof(char) * 100, "안녕하세요");
    strcpy_s(user1.receiver, sizeof(char) * 50, "user2@gmail.com");
    strcpy_s(user1.caller, sizeof(char) * 50, "user1@gmail.com");
    strcpy_s(user1.content, sizeof(char) * 1000, "반갑습니다. 잘부탁드립니다. 감사합니다. 안녕하세요. 안녕히 가세요. 안녕히 계세요. 다시 만나요. 다시 봬요.");
    strcpy_s(user1.date, sizeof(char) * 100, "1090-12-01");
    user1.priority = 1;

    printf("제목: %s\n발신자: %s\n수신자: %s\n내용: %s\n날짜: %s\n우선 순위: %d", user1.title, user1.receiver, user1.caller, user1.content, user1.date, user1.priority);
    return 0;
}
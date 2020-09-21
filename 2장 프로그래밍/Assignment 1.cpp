/* 
이름, 주소, 전화번호를 입력받아 아래와 같이 화면에 출력하는 프로그램을 작성하세요.
제 이름은 ()이며, ()에 살고 있으며, 연락처는 ()입니다.

Hint: %s는 문자열 자료형이다.
Hint: sizeof()는 크기를 측정하는 함수이다.
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

/* 
if (0 == scanf("%[^\n]s", &name, sizeof(name))) {}
* 여기서 %[^\n]s은 줄바꿈 코드륾 만날 때까지 문자열을 입력받는다는 의미다.
* 조금 더 이해하기 쉽게 예제를 만들었다.

#include <stdio.h>

int main(void) {
    char number[100] = { 0, };
    scanf_s("%[^5]s", &number, sizeof(number));

    printf("%s", number);

    return 0;
}

* 나는 scanf("%[^5]s")를 사용했다. 그 의미는 입력 중에 5라는 글자가 만나면 끝이다. 그 다음 글자는 없다는 것이다.
 */
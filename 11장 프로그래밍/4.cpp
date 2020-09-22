/* 
학생을 나타내는 구조체 student는 주민등록번호(정수), 이름(문자열), 전화번호(문자열) 로 구성된다.
구조체 안에서 공용체를 사용하여 주민등록번호 또는 학번 중에서 하나를 사용할 수 있도록 구조체를 정의해보자.
 */

#include <stdio.h>

struct STUDENT {
    union {
        int Resident_number;
        int Student_number;
    };
    char name[100] = { 0 };
    char phone[100] = { 0 };
};

int main(void) {
    struct STUDENT student = {2019100000, "임시이름", "010-0000-0000"};
    return 0;
}
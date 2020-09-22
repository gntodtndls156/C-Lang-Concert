/* 
직원을 나타내는 구조체 employee가 사번(정수), 이름(문자열), 전화번호(문자열), 나이(정수) 등으로 구성된다.
구조체의 배열을 선언하고 10명의 데이터로 초기화하라.
이 중에서 나이가 20이상 30이하인 직원을 찾아서 출력하도록 하라.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct EMPLOYEE {
    int num; // 사번
    int old; // 나이
    char name[10]; // 이름
    char phone_num[20]; // 전화번호
}employee;

int main(void) {
    employee compus[10];

    for (int i = 0; i < 10; i++) {
        compus[i].num = i + 1;
        strcpy_s(compus[i].name, sizeof(compus[i].name), "홍길동");
        strcpy_s(compus[i].phone_num, sizeof(compus[i].phone_num), "010-0000-0000");
        compus[i].old = rand() % 50 + 1;
    }

    for (int i = 0; i < 10; i++) {
        if (compus[i].old >= 20 && compus[i].old <= 30) {
            printf("%s%d\n", compus[i].name, compus[i].num);
        }
    }

    return 0;
}
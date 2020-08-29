/* 
사용자로부터 반복 횟수를 받아서 그 수만큼 "안녕하세요"를 출력하는 프로그램을 작성해보자.
 */

#include <stdio.h>

int main(void) {
    printf("몇 번이나 반복할까요?: ");
    int number;
    scanf_s("%d", &number);

    for (int i = 0; i < number; i++)
        printf("안녕하세요?\n");

    return 0;
}
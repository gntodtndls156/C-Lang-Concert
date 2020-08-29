/* 
컴퓨터는 막대 그래프를 그리는 데도 사용된다.
사용자로부터 1부터 50사이의 숫자 10개를 입력받아서 숫자만큼의 별표를 출력하는 프로그램을 작성하라. 막대는 가로로 그려지게 된다.
 */

#include <stdio.h>

int main(void) {
    int Data;

    for (int i = 0; i < 10; i++) {
        printf("데이터를 입력하시오: ");
        scanf_s("%d", &Data);

        for (int j = 0; j < Data; j++)
            printf("*");

        printf("\n");
    }
    return 0;
}
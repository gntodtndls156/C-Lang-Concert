/* 
사용자가 신호등의 색깔을 입력하면 "정지", "주의", "진행"와 같은 문장을 출력하는 프로그램을 작성해보자. 
한 문자를 입력받을 때는 getchar() 함수를 사용한다.
 */

#include <stdio.h>

int main(void) {
    printf("신호등의 색깔 입력 (R, G, Y): ");
    char chr = getchar();

    switch (chr) {
    case 'R':
        printf("정지!");
        break;
    case 'G':
        printf("진행");
        break;
    case 'Y':
        printf("주의");
        break;
    }

    return 0;
}
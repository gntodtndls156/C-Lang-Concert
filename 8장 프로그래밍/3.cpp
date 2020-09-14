/* 
다음과 같이 화면에 **를 출력하는 함수를 작성하고 이것을 호출하여서 다음과 같은 출력을 만들어보자.
 */

#include <stdio.h>

void draw_stars();

int main(void) {
		draw_stars();
    printf("Hello World!\n");
    draw_stars();

    return 0;
}

void draw_stars() {
    printf("**********************\n");
}
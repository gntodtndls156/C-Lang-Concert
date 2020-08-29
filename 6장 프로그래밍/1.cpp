/* 
간단한 카운트 다운 프로그램을 작성하여 보자. 60초부터 0초까지 숫자를 출력하고 0초가 되면 "발사"를 출력한다. 
*/

#include <stdio.h>

int main(void) {
    for (int i = 60; i >= 0; i--)
        printf("%d ", i);

    printf("\n발사!");

    return 0;
}
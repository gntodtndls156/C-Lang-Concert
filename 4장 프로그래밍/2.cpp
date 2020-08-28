/* 
사용자로부터 하나의 정수를 받아서 정수를 세제곱값을 계산하여 출력하는 프로그램을 작성하라.
예를 들어서 사용자가 3을 입력하였다면 3*3*3 = 27을 출력하면 된다.
 */

#include <stdio.h>

int main(void) {
    printf("첫 번째 정수를 입력하시오: ");
    int number;
    scanf_s("%d", &number);

    printf("세제곱값은 %d*%d*%d = %d입니다.", number, number, number, number*number*number);

    return 0;
}

/* 
* number 변수를 반복하여 작성하다니, 비효율적이라고 생각해본 적이 있는가?
* 그렇다면 내가 생각하는 방법은 pow()함수를 이용하는 것이다.
* 이 함수는 변수를 반복해서 작성하지 않고 짧은 문구로 세제곱을 계산할 수 있다.
#include <stdio.h>
#include <math.h>

int main(void) {
    printf("첫 번째 정수를 입력하시오: ");
    int number;
    scanf_s("%d", &number);

    printf("세제곱값은 %d*%d*%d = %d입니다.", number, number, number, pow(number, 3));

    return 0;
}
* pow()를 쓰기 위해서 math.h 헤더 파일을 호출해야 한다.
 */
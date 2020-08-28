/* 
5번 문제를 인용하여, pow()함수를 사용하여 해결하시오. f(x)를 계산하는 사용자 정의 함수를 만들어서 해결하라.
이 때, x의 값을 매개변수로 전달하여 f(x)의 값을 계산하고, 계산된 값을 return 하여 출력하세요.
이 때, main() 함수의 x 변수를 출력하여 메인 메모리 할당 상태를 메모리 맵으로 그려보시오.
 */

float Pow_function(float number);

int main(void) {
    float x;

    printf("정수를 입력하시오: ");
    scanf_s("%f", &x);

    printf("수식의 값은 %f입니다.", Pow_function(x));
    printf("\n\nmain() 함수의 \"x\"변수의 주소는 %p입니다.\nPow_function 함수의 주소는 %p", &x, &Pow_function);

    return 0;
}

float Pow_function(float number) {
    printf("\n사용자 정의 함수의 \"x\"변수의 주소는 %p입니다\n\n", &number);
    return ((pow(number, 3) - 20) / (number - 7));
}
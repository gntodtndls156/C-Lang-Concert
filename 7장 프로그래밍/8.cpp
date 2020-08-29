/* 
사용자로부터 5개의 실수 자료를 읽어서 평균과 표준 편차를 계산하는 프로그램을 작성하라.
사용자로부터 받은 자료들은 배열에 저장하라. 
평균이란 n개의 실수가 주어져 있을 때, 다음과 같이 계산된다.

m = {1 \over n} \sum_{i=1}^n x_i

표준 편차는 분산의 양의 제곱근으로 분산은 다음과 같이 계산된다.
표준 편차는 자료가 평균값 주위에 어느 정도의 넓이로 분포하고 있는가를 나타내는 하나의 척도이다.

u = {1 \over n}\sum_{i=1}^n (x_i - m)^2
 */

#include <stdio.h>
#include <math.h>

int main() {
    double arr[5];
    double sum = 0.0, avg = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("실수를 입력하십시오: ");
        scanf_s("%lf", &arr[i]);
        sum += arr[i];
    }
    avg = sum / 5;

    sum = 0.0;
    for (int i = 0; i < 5; i++)
        sum += (arr[i] - avg) * (arr[i] - avg);

    printf("평균: %lf\n", avg);
    printf("표준편차: %lf", sqrt(sum / 5));

    return 0;
}
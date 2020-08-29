/* 
절대 평가로 학생들의 학점을 계산하는 프로그램을 작성해보자. 
한 학생에 대하여 중간고사와 기말고사를 읽어서 아래의 규칙에 따라서 학생들의 학점을 결정하여 출력한다.

1. 중간고사, 기말고사를 차례대로 사용자로부터 읽는다.
2. 중간고사와 기말고사의 평균값이 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 60점 이상이면 D, 60점 미만이면 F학점이라고 출력하고 종료한다.
 */

#include <stdio.h>

int main(void) {
    printf("중간 고사 점수를 입력하시오 :");
    int middle_score;
    scanf_s("%d", &middle_score);

    getchar();

    printf("기말 고사 점수를 입력하시오: ");
    int end_score;
    scanf_s("%d", &end_score);

    int AVG = (middle_score + end_score) / 2;
    char at;

    if (AVG > 90)
        at = 'A';
    else if (AVG > 80)
        at = 'B';
    else if (AVG > 70)
        at = 'C';
    else if (AVG > 60)
        at = 'D';
    else
        at = 'F';

    printf("당신의 학점은 %c학점입니다.", at);
}
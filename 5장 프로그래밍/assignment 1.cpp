/* 
6번 문제를 이용한다. 평균을 계산하여 grade를 return하는 사용자 정의 함수를 만들어서 해결하시오. 
이 때, 중간고사 점수와 기말고사 점수를 매개변수로 전달하여 grade를 return하여 출력하도록 하시오. 
이 때, main() 함수에서의 중간고사 점수를 위한 변수와 기말고사의 점수의 위한 변수의 주소를 출력하고, 
사용자 정의 함수에서도 매개변수인 중간고사 점수 변수와 기말고사 점수 변수의 주소를 출력한다.
 */

#include <stdio.h>

int AVG(int m_score, int e_score);

int main(void) {
    printf("중간 고사 점수를 입력하시오: ");
    int middle_score;
    scanf_s("%d", &middle_score);

    printf("기말 고사 점수를 입력하시오: ");
    int end_score;
    scanf_s("%d", &end_score);

    char at;

    int AVG_function = AVG(middle_score, end_score);
    printf("\nmain() {\n\tmiddle_score: %p\n\tend_score: %p\n}", &middle_score, &end_score);

    if (AVG_function > 90)
        at = 'A';
    else if (AVG_function > 80)
        at = 'B';
    else if (AVG_function > 70)
        at = 'C';
    else if (AVG_function > 60)
        at = 'D';
    else
        at = 'F';

    printf("당신의 학점은 %c학점입니다.", at);
}

int AVG(int m_score, int e_score) {
    printf("AVG() {\n\tmiddle_score: %p\n\tend_score: %p\n}", &m_score, &e_score);
    return (m_score + e_score) / 2;
}
/* 
5명의 학생에 대한 학번, 국어, 영어, 수학 성적을 입력받아 2차원 배열에 저장한다.
사용자 정의 함수를 만들어서 각 학생별 포인터 매개변수를 이용하여 평균점수와 학점을 계산하여 반환한다.
(이 때 국어, 영어, 수학 점수를 매개변수로 전달하고 평균점수와 학점은 포인터 매개변수로 반환한다.)
(학점은 문자열로 반환하는데 A인 경우에는 "A학점"이라고 출력한다. )
(즉 1001 80 90 100 90 A학점 형식으로 출력한다.)
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void p_avg(float*, int u_score[][4], int number, char*);

int main(void) {
    int score[5][4] = { 0, };
    float avgnum;
    char* ch = (char* )malloc(sizeof(char) * 6);

    for (int i = 0; i < 5; i++) {
        printf("학번 입력하세요: ");
        scanf_s("%d", &score[i][0]);

        printf("국어 점수 입력하세요: ");
        scanf_s("%d", &score[i][1]);

        printf("영어 점수 입력하세요: ");
        scanf_s("%d", &score[i][2]);

        printf("수학 점수 입력하세요: ");
        scanf_s("%d", &score[i][3]);
    }

    for (int i = 0; i < 5; i++) {
        p_avg(&avgnum, score, i, ch); // 평균 점수의 변수를 포인터로 반환
        for (int j = 0; j <= 3; j++) {
            printf("%d ", score[i][j]);
        }
        //p_score(avgnum, ch); // 학점 변수를 포인터로 반환
        printf("%.0f %s\n", avgnum, ch);

    }

    return 0;
}

void p_avg(float* num, int u_score[][4], int number, char* ch) { // 포인터 float 값
    int sum = 0;
    for (int i = 1; i < 4; i++) {
        sum += u_score[number][i];
    }
    *num = (float)sum / 3.0; // 평균 점수의 변수 포인터 값

    if (*num >= 90)
        strcpy_s(ch, 6, "A학점");
        //ch = "A학점";
    else if (*num >= 80 && *num <= 89)
        strcpy_s(ch, 6, "B학점");
    else if (*num >= 70 && *num <= 79)
        strcpy_s(ch, 6, "C학점");
    else if (*num >= 60 && *num <= 69)
        strcpy_s(ch, 6, "D학점");
    else
        strcpy_s(ch, 6, "F학점");
}
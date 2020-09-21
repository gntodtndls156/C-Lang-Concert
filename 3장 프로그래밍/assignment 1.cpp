/* 
이름, 국어, 영어, 수학 성적을 입력받아 총점과 평균을 계산하여 출력하는 프로그램을 작성하시오.
Hint: 사용자 정의 함수를 호출하여 국어, 영어, 수학 성적을 매개변수로 전달하여 총점을 계산하고,
Hint: 평균은 계산된 총점으로 계산하여 출력하도록 하시오.
Hint: 이 때, 국어, 영어, 수학, 총점 평균을 위한 변수의 주소를 출력하고, 
Hint: 사용자 정의 함수에서 매개변수인 국어, 영어, 수학, 변수의 주소를 출력하시오.)
 */
#include <stdio.h>

int score(int nar, int eng, int math);
int ave_score(int sum);
int ave = 0;

int main(void) {
    printf("이름을 입력하십시오: ");
    char name[10];
    scanf_s("%s", &name, sizeof(name));
    getchar();

    printf("국어 영어 수학 순서대로 점수를 입력하십시오.: ");
    int narration, english, math;
    scanf_s("%d %d %d", &narration, &english, &math);

    score(narration, english, math);

    /*
    printf("===== address of varible from main() =====\n
    narration: %d | Hex: %p\nenglish: %d | Hex: %p\nmath: %d | Hex: %p\nsum: %d | Hex: %p\nave: %d | Hex: %p", 
    &narration, 
    &narration, 
    &english, 
    &english, 
    &math,
    &math, 
    score(narration, english, math), 
    score(narration, english, math), 
    ave_score(score(narration, english, math)), 
    ave_score(score(narration, english, math)));
    */

    return 0;
}

int score(int nar, int eng, int math) {
    int sum = 0;

    sum = nar + eng + math;
    printf("총점: %d\n", sum);
    printf("평균: %d\n", (int)ave_score(sum));
    printf("\n\n==================== address of varible ====================\nnarration: \t%d | Hex: %p\nenglish: \t%d | Hex: %p\nmath: \t\t%d | Hex: %p\n", &nar, &nar, &eng, &eng, &math, &math);
    printf("sum: \t\t%d | Hex: %p\n", &sum, &sum);
    printf("ave: \t\t%d | Hex: %p\n", &ave, &ave);

    // 메모리 맵 출력 printf()
    printf("|-----------------------|\n| DATA \t\t\t|\n| ave: %p\t\t|\n|-----------------------|\n| stack\t\t\t|\n| narration: %p\t|\n| english: %p\t|\n| math: %p\t|\n| sum: %p\t\t|\n|-----------------------|", &ave, &nar, &eng, &math, &sum);
    return sum;
}
int ave_score(int sum) {
    ave = sum / 3;

    return ave;
}
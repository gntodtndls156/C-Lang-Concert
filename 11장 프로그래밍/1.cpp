/* 
구조체를 이용하여서 현재 시각을 표현한다.
사용자로부터 2개의 시각을 입력받아서 두 시각 사이의 차이를 계산하여 출력하는 프로그램을 작성한다.
 */

#include <stdio.h>

typedef struct TIME {
    int hour,
        min,
        sec; // 시 분 초
}Time;

int main(void) {
    Time start_t, stop_t;

    Time temp;

    printf("시작시간(시, 분, 초): ");
    scanf_s("%d %d %d", &start_t.hour, &start_t.min, &start_t.sec);
    printf("종료시간(시, 분, 초): ");
    scanf_s("%d %d %d", &stop_t.hour, &stop_t.min, &stop_t.sec);

    temp.hour = stop_t.hour - start_t.hour;
    temp.min = stop_t.min - start_t.min;
    temp.sec = stop_t.sec - start_t.sec;

    while (temp.hour < 0 || temp.min < 0 || temp.sec < 0) {
        if (temp.hour < 0) {
            printf("시작시간이 종료시간보다 작아야 합니다.");
            return 0;
        }
        if (temp.min < 0) {
            temp.hour--;
            temp.min += 60;
        }
        if (temp.sec < 0) {
            temp.min--;
            temp.sec += 60;
        }
    }

    printf("소요시간 %d:%d:%d", temp.hour, temp.min, temp.sec);

    return 0;
}
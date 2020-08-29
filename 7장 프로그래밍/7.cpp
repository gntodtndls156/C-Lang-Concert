/* 
배열을 이용하여 간단한 극장 예약 시스템을 작성해보자.
아주 작은 극장이라서 좌석이 10개밖에 안 된다.
사용자가 예약을 하려고 하면 먼저 좌석 배치표를 보여준다.
즉, 예약이 끝난 좌석은 1로, 예약이 안 된 좌석은 0으로 나타낸다.
 */

#include <stdio.h>

int main(void) {
    char YN = 'y';
    int reserved[11] = { 0, }, reservation;

    while (true) {

        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        scanf_s("%c", &YN, sizeof(YN));

        if (YN == 'n') {
            printf("System ending . . .");
            break;
        }


        for (int i = 0; i < 2; i++) {
            printf("\n=====================================\n");
            for (int j = 0; j < 10; j++) {
                if (i == 0)
                    printf("   %d   ", j + 1);
            }
            printf("\n");
        }

        for (int i = 1; i < 11; i++) {
            printf("   %d   ", reserved[i]);
        }

        printf("\n몇 번째 좌석을 예약하시겠습니까? ");
        scanf_s("%d", &reservation);

        if (reservation <= 0 || reservation >= 11) {
            printf("정상적인 좌석 번호가 아닙니다.\n System reloading\n");
            getchar();
            continue;
        }
        else {
            printf("예약되었습니다.\n");
        }

        reserved[reservation]++;
        getchar();
    }

    return 0;
}
/* 
라스베가스에서 50달러를 가지고 도박을 하는 사람이 있다.
한 번의 도박에 1달러를 건다고 가정하자.
돈을 따거나 잃을 확률은 0.5로 동일하다고 가정하자.
도박사는 가진 돈을 다 잃거나 목표 금액인 250달러에 도달하면 도박을 중지한다.
도박사가 목표 금액에 도달하는 확률이 얼마나 되는지를 계산해보자.

Hint: bets++; : 배팅 횟수 증가
Hint: if ((double)rand()/RAND_MAX < 0.5) cash++; : $1를 얻는다
Hint: else cash--; $1를 잃는다.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int start_price = 50, win = 0, batting = 0;
    const int target_price = 250;

    printf("초기 금액 $%d\n목표 금액 $%d\n", start_price, target_price);

    for (int i = 0; i < 1000; i++) {
        batting++;
        if ((double)rand() / RAND_MAX < 0.5) {
            start_price++;
            win++;
        }
        else {
            start_price--;
        }

        if (start_price <= 0 || start_price >= target_price) {
            break;
        }
    }
    printf("%d 중의 %d번 승리\n", 1000, win);
    printf("이긴 확률 = %lf\n", (double)win / 1000 * 100);
    printf("평균 배팅 횟수 =  %lf", (double) win / 1000);

    return 0;
}
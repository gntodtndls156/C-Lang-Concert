/* 
수학에서의 "random walk"라 불리는 문제를 배열을 이용하여 프로그래밍해보자.
문제는 다음과 같다. 술에 취한 딱정벌레가 10개의 1차원 타일 위를 걸어다닌다.
딱정벌레는 랜덤한 방향으로 이동한다.
현재의 위치에서 좌우의 2개의 타일로 걸어가는 확률은 동일하다고 가정하자.
딱정벌레가 지나간 길을 표시하는 프로그램을 작성해보자.

`` 방 전체를 1차원 배열 tile[10]로 모델링을 하고 처음에는 딱정벌레가 배열을 중앙에 있다고 가정하라. tile[]의 초깃값은 _ 이다.
`` 딱정벌레가 타일을 지나갈 때마다 배열 요소의 값을  * 로 만들어서 딱정벌레가 지나갔음을 나타낸다.
`` 1. 0부터 1사이의 랜덤한 숫자를 생성하여 다음과 같이 움직인다.
``     즉 0이면 왼쪽으로 이동하고 1이면 오른쪽으로 이동한다.
`` 2. 0부터 12사이의 랜덤한 숫자는 다음과 같이 생성할 수 있다.
`` 
`` int direction = rand()%2; 
`` getch() 를 사용하면 사용자가 어떤 키를 누를 때까지 프로그램을 정지시킬 수 있다.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
    char tile[10];
    int direction, room = 5;

    srand((unsigned)time(NULL));
    while (1) {
        for (int i = 0; i < 10; i++) {
            tile[i] = '-';
        }

        direction = rand() % 2;

        if (room == 0)
            direction = 1;
        else if (room == 9)
            direction = 0;

        if (direction == 0)
            room--;
        else
            room++;

        tile[room] = '*';

        for (int i = 0; i < 10; i++)
            printf("%c", tile[i]);
        printf("\n");

        _getch();
    }

    return 0;
}
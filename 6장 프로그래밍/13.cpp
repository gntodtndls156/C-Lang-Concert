/* 
피타고라스의 정리는 직각 삼각형에서 직각을 낀 두 변의 길이를 a, b라고 하고, 빗변의 길이를 c라고 하면 의 수식이 성립한다는 것이다. 
각 변의 길이가 100보다 작은 삼각형 중에서 피타고라스의 정리가 성립하는 직각 삼각형은 몇 개나 있을까? 
3중 반복문을 이용하여 피타고라스의 정리를 만족하는 3개의 정수를 찾도록 한다.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            for (int k = 1; k <= 100; k++) {
                if (pow(k, 2) == pow(j, 2) + pow(i, 2)) {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}
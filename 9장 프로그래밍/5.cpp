/* 
간단한 영상 처리 프로그램을 작성해보자. 디지털 영상은 미세한 점들로 이루어져 있다.
이러한 점을 픽셀(pixel)이라고 한다. 픽셀의 밝기 정보는 숫자로 표현된다.
예를들어서 크기가 10x10인 디지털 영상의 한 예이다.

0 0 0 0 9 0 0 0 0 0
0 0 0 9 9 0 0 0 0 0
0 0 9 0 9 0 0 0 0 0
0 0 0 0 8 0 0 0 0 0
0 0 0 0 9 0 0 0 0 0
0 0 0 0 7 0 0 0 0 0
0 0 0 0 8 0 0 0 0 0
0 0 0 0 9 0 0 0 0 0
0 0 0 0 9 0 0 0 0 0
0 0 6 6 9 7 7 0 0 0

각 픽셀의 밝기는 0에서 9까지 변화할 수 있다고 가정하고 
디지털 영상을 1차원 배열 `char image[HEIGHT * WIDTH];`로 표현하고 
각 픽셀의 밝기를 1씩 줄이는 프로그램을 작성해보자.
포인터에 대한 이해를 높이기 위하여 영상의 밝기를 줄이는 함수 `void brighten_image(char *p, int n)`를 작성하고 
영상을 담고 있는 1차원 배열을 매개 변수로 전달하도록 하라.
 */

#define HIGHT 10
#define WIGHT 10

#include <stdio.h>

void brighten_image(char* p, int n);

int main(void) {
    char image[HIGHT * WIGHT] = {
        0,0,0,0,9,0,0,0,0,0,
        0,0,0,9,9,0,0,0,0,0,
        0,0,9,0,9,0,0,0,0,0,
        0,0,0,0,8,0,0,0,0,0,
        0,0,0,0,9,0,0,0,0,0,
        0,0,0,0,7,0,0,0,0,0,
        0,0,0,0,8,0,0,0,0,0,
        0,0,0,0,9,0,0,0,0,0,
        0,0,0,0,9,0,0,0,0,0,
        0,0,6,6,9,7,7,0,0,0
    };

    brighten_image(image, 100);

    return 0;
}

void brighten_image(char* p, int n) {
    for (int i = 0; i < n; i++) {
        if (p[i] != 0)
            p[i]--;
    }
}
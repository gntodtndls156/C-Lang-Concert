/* 
성적을 나타내는 구조체가 다음과 같다.
사용자에게 구조체의 개수를 입력하도록 요청하고 개수만큼의 동적 메모리를 할당 받은 후에 구조체에 값을 저장한다.
입력이 끝나면 구조체에 저장된 값을 화면에 출력한다.

struct course {
    char subject[30]; // 과목 이름
    double marks; // 학점
}
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct course {
    char subjext[30]; // 과목 이름
    double marks; // 학점
};

int main(void) {
    printf("구조체의 개수: ");
    int StructCount;
    scanf_s("%d", &StructCount);

    struct course *DATA = (struct course*)malloc(sizeof(struct course) * StructCount);
    if (DATA == NULL) return 1;

    for (int i = 0; i < StructCount; i++) {
        printf("과목 이름과 성적을 입력하세요: ");
        scanf("%s %lf", DATA[i].subjext, &DATA[i].marks);
    }

    printf("저장된 정보 출력:\n");
    for (int i = 0; i < StructCount; i++) {
        printf("%s\t%lf\n", DATA[i].subjext, DATA[i].marks);
    }
}
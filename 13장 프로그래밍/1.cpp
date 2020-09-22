/* 
다음과 같은 구조체를 동적 메모리 할당으로 생성하는 프로그램을 작성해보자.
동적으로 생성된 구조체에는 { 10, 3.14, 'a' }를 저장한다.

typedef struct rec {
    int i;
    float PI;
    char A;
} my_record;
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct rec {
    int i;
    float PI;
    char A;
} my_record;

int main(void) {
    my_record *record = (my_record *)malloc(sizeof(my_record) * 1);
    record[0] = { 10, 3.14, 'a' };

    printf("%d\n%f\n%c", record[0].i, record[0].PI, record[0].A);

    return 0;
}
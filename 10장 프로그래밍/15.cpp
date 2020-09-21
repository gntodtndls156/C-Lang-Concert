/* 
프로그래밍을 도와주는 프로그램을 작성해보자.
문장을 입력하면 문장의 앞부분과 뒷부분에 필요한 문장들을 자동적으로 삽입하도록 하라.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    printf("문장을 입력하시오: ");
    char ch[200];
    gets_s(ch, 199);

    printf("전체 프로그램: \n");
    printf("#include <stdio.h>\nint main(void) {\n\t%s\n\treturn 0;\n}", ch);
}
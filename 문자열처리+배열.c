#include <stdio.h>

// 배열을 가리키는 포인터를 인자로 받을때 포인터는 
// 배열 자체가 아닌 배열의 0번째 주소를 가리킨 상태로 전달됨 

void fn(char *d, const char *s) {
    while (*s) {
        *d = *s;   // s가 가리키는 문자 → d가 가리키는 위치에 복사
        d++;       // d 한 칸 이동 (str2 배열 내에서)
        s++;       // s 한 칸 이동 ("first" 문자열 내에서)
    }
    *d = '\0';     // d의 마지막 인덱스 에 문자열 종료 문자 삽입
     // d -> "firsttring " 공백까지 총 11개 인덱스 
}
// 배열 자체는 main 함수의 스택 메모리에 존재하므로 함수가 끝나도 변하지 않음.


int main() {
    const char *str1 = "first";
    char str2[50] = "teststring";
    int result = 0;
    int i;

    fn(str2, str1);
    for (i = 0; str2[i] != '\0'; i++) {
        result += i; // 공백문자를 제외한 나머지 문자의 개수 
    }

    printf("%d", result); // 10 출력 
    return 0;
}

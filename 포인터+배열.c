#include <stdio.h>
#include <string.h>

void fn(char* str) {
    
    char t;
    int len = strlen(str);
    char* p1 = str; // p1 ->  str 배열의 첫번째 인덱스 str[0] 를 가리킴 
    char* p2 = str + len - 1; // p2 -> str[7] 를 가리킴 

    while (p1 < p2) { 
        t = *p1; // p1이 가리키는 주소의 값을  t에 저장 
        *p1 = *p2; // p1 이 가리키는 주소를 p2로 변경 
        *p2 = t; // p2는 t가 위치한 주소를 가리킴 
        p1++; // p1 증가 -> p1이 가리키는 인덱스 번호가 늘어남 str[0] -> str[1]
        p2--; // p2 감소 ->  p2가 가리키는 인덱스 번호가 줄어듦 str[7] -> str[6]
        
    // 양 끝 쪽에서 포인터가 가운데로 이동하며 배열에 있는 문자의 순서를 스와핑 하는 방식 
    }
}   // fn 함수 이후 str 배열 상태 :  "HGFEDCBA" 

int main(int argc, char* argv[]) {
    char str[100] = "ABCDEFGH";
    int len, i;

    fn(str);
    len = strlen(str);

    for (i = 1; i < len; i += 2) { // str의 1 , 3 , 5 , 7 인덱스 값 출력 
        printf("%c", str[i]);
    }
    // GECA 
    return 0;
}

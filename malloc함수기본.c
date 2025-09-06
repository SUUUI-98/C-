#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char tmp[10]; //10 칸짜리 배열 선언 
    char* p[2]; // 2칸 짜리 포인터 배열 선언 
    int i; 

    for (i = 0; i < 2; i++) { // i = 0 , 1 총 2번 반복 
        scanf("%s", tmp); 
        // i = 0 일때 "천국대마경" 입력 -> tmp 저장 
        // i = 1 일때 "2기 언제나옴" -> tmp 저장 
        
        // p[0] 에 char 의 크기 * (tmp에 저장된 문자열 길이 + 1) 크기로 배열이 동적으로 할당됨 
        //(char*) char 의 포인터 자료형으로 형변환 
        p[i] = (char*)malloc(sizeof(char) * (strlen(tmp) + 1));
        // 공간이 할당된 p[i] 에 tmp 문자를 복사 
       
        strcpy(p[i], tmp);
        // p[0] -> 6칸 할당 -> "천국대마경"
        // p[1] -> 8칸 할당 -> "2기 언제나옴" 
    }

    for (i = 1; i >= 0; i--) { // i = 1 , 0 -> p[1] 부터 출력 
        printf("%s\n", p[i]); 
    
        // 2기 언제나옴
        // 천국대마경
        free(p[i]);
        //메모리 할당을 해제하여 누수를 방지 
    }

    return 0;
}

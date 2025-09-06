#include <stdio.h>
#include <stdlib.h>

// 연결 리스트의 노드를 정의하는 구조체
// char c: 문자를 저장할 변수
// struct node* p: 다음 노드를 가리키는 포인터
struct node {
    char c;
    struct node* p;
};

// 문자열을 역순으로 연결 리스트로 만드는 함수
struct node* func(char* s) {
    // h는 리스트의 맨 앞(헤드)을 가리키는 포인터, 초기값은 NULL
    // n은 새로 생성된 노드를 가리키는 포인터
    struct node* h = NULL, *n;
    
    // 문자열의 끝(널 종료 문자 '\0')에 도달할 때까지 반복
    while(*s) {
        // 1. 새 노드를 위한 메모리를 동적 할당
        n = malloc(sizeof(struct node));
        
        // 2. 현재 문자열의 문자를 노드에 저장하고, 문자열 포인터 s를 다음 문자로 이동
        // s++는 현재 문자를 먼저 사용하고 포인터를 이동시키는 후위 연산
        n->c = *s++;
        
        // 3. 새 노드 n의 다음 노드 포인터 p가 기존의 헤드 h를 가리키도록 설정
        // 이로 인해 새 노드가 리스트의 맨 앞에 추가됨
        n->p = h;
        
        // 4. 리스트의 헤드를 새 노드 n으로 업데이트
        // 이제 h는 새롭게 추가된 노드를 가리킴
        h = n;
    }
    
    // 최종적으로 완성된 연결 리스트의 헤드 포인터를 반환
    return h;
}

int main() {
    // func("BEST")를 호출하여 "BEST"를 역순으로 담은 연결 리스트를 생성
    // 리스트는 T -> S -> E -> B 순서로 연결됨
    struct node* n = func("BEST");
    
    // n 포인터가 NULL이 될 때까지 (리스트의 끝에 도달할 때까지) 반복
    while(n) {
        // 1. 현재 노드의 문자(c)를 출력
        // 첫 번째 반복: T, 두 번째: S, 세 번째: E, 네 번째: B
        putchar(n->c);
        
        // 2. 현재 노드 n을 임시 포인터 t에 저장
        struct node* t = n;
        
        // 3. n 포인터를 다음 노드로 이동 (n->p)
        n = n->p;
        
        // 4. 임시 포인터 t가 가리키는 현재 노드의 메모리를 해제 (메모리 누수 방지)
      
        free(t);
    }
    
    // 프로그램 정상 종료
    return 0;
}

#include <stdio.h>

struct Node {
// 정수와 구조체 포인터 변수를 담는 구조체 Node 
    int v;
    struct Node* next;
};
      // n1의 주소가 인자로 전달됨 
void func(struct Node* n) {
    while (n != NULL && n->next != NULL) { 
    // n의 next 변수가 가리키는 주소가 비어있지 않을 동안 반복 
        int t = n->v; // n1의 v = 1 , t = 1 
        n->v = n->next->v; //n1.v ->  n1의 next가 가리키는 n3의 v로 할당  
        // n1.v = 3 
        //next가 가리키는 n3의 v는 t로 할당 , n3.v = 1 
        n->next->v = t;
        // n1의 next-> n3의 next -> n2 
        // n2는 next 가 null 이므로 while 문 종료 
        n = n->next->next;
    }
}// func 이후 n1.v = 3 , n2.v = 2 , n3.v =1 

int main() {
    struct Node n1 = {1, NULL};
    struct Node n2 = {2, NULL};
    struct Node n3 = {3, NULL};
    struct Node* c = &n1; // 구조체 포인터 변수 c는 n1의 주소를 가리킴 

    n1.next = &n3; // n1의 next는 n3의 주소를 가리킴 
    n3.next = &n2; // n3의 next는 n2의 주소를 가리킴 
    
    func(&n1);
    
    while (c != NULL) {
        printf("%d", c->v); //c가 가리키는 n1의 v출력 -> 3 
        c = c->next;// 출력 후 c의 next 가 가리키는 주소에 있는 구조체를 c에 할당 
        // 즉 n1의 next 가 가리키는 n3이 c가 가리키는 구조체 주소가 됨 
    }
    // 312 출력 
    return 0;
}

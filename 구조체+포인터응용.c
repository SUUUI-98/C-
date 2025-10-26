#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int p;
    struct node* n;//구조체를 가리키는 포인터 변수 
};
 
int main() {
    struct node a = {1, NULL};
    struct node b = {2, NULL};
    struct node c = {3, NULL};
 
    a.n = &b; // a의 n은 b의 주소를 가리킴 
    b.n = &c; // b의 n은 c의 주소를 가리킴 
    c.n = NULL; // c의 n은 null 
    
    c.n = &a; // c의 n은 a의 주소를 가리킴 
    a.n = &b; // a의 n은 b의 주소를 가리킴 
    b.n = NULL; // b의 n은 null
    
    struct node* head = &c; // 구조체 포인터 변수 head 는 c의 주소를 가리킴  
    printf("%d %d %d", head->p, head->n->p, head->n->n->p);
    // head 가 가리키는 c 의 p는 3 ,head 가 가리키는 c 의 n 이 가리키는 a의 p는 1 
    // head 가 가리키는 c 의 n이 가리키는 a의 n이 가리키는 b의 p는 2 
    //312 출력 
    return 0;
}
 

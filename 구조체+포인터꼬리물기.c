#include <stdio.h>

struct node {
    int n1;
    struct node *n2; // node를 가리키는 포인터 변수 
};

int main() {
    struct node *head=NULL; // node를 가리키는 포인터 변수 
    struct node a={10, 0}; 
    struct node b={20, 0};
    struct node c={30, 0};
    
    head=&a; //head 는 구조체 a의 주소를 가리킴 
    a.n2=&b; // a의 포인터 변수 n2는 b의 주소를 가리킴 
    b.n2=&c; // b의 포인터 변수 n2는 c의 주소를 가리킴
    
    printf("%d", head->n2->n1); 
    // head 가 가리키는 구조체 주소에 있는 n2 포인터변수가 가리키는 주소의 n1을 출력하라 
    // head -> a.n2 -> b.n1 
    // 20 출력 
    return 0;
}

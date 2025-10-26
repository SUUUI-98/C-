#include <stdio.h>
 
struct dat { // 정수 x,y 를 담는 구조체 
    int x;
    int y;
};
 
int main() {
    struct dat a[] = {{1, 2}, {3, 4}, {5, 6}}; // 구조체를 담는 배열 a 
    struct dat* ptr = a; // 배열 a를 가리키는 구조체포인터 ptr 
    struct dat** pptr = &ptr; //구조체 포인터 ptr를 가리키는 이중구조체포인터 pptr 
 
    (*pptr)[1] = (*pptr)[2]; // pptr 의 1번째 요소를 2번째 요소로 할당 
    //  {{1, 2}, {5, 6}, {5, 6}} 
    // pptr이 가리키는 ptr이 가리키는 a의 요소가 위처럼 바뀌게 됨 
    printf("%d 그리고 %d", a[1].x, a[1].y); // 5 그리고 6 출력 
 
    return 0;
}
 

#include <stdio.h>
#define SIZE 3
 
typedef struct {
	  int a[SIZE]; //정수형 배열 a 의 크기는 3 
    int front;
    int rear;
} Queue;
 
void enq(Queue* q, int val){
    q->a[q->rear] = val; // 첫번째 호출 : 구조체 q의 a[q의 rear번째 인덱스 (0)] = 1 
    q->rear = (q->rear + 1) % SIZE;// q.rear = (q.rear+1) %3 = 1%3 = 1
}
 
int deq(Queue* q) {
    int val = q->a[q->front]; // q의 a의 0번째 요소를 val 에 할당 = 1  
    q->front = (q->front + 1) % SIZE; // (0+1)%3 = 1 
    return val; // 1 리턴
}
 
int main() {
    Queue q = {{0}, 0, 0};
 
    enq(&q,1); // {{1}, 0, 1};
    enq(&q,2); // {{1,2},0, 2}
    deq(&q); // {{1,2},1, 2}
    enq(&q, 3); // {{1,2,3} , 1 , 0}
    
    int first = deq(&q); // 2 ,{{1,2,3} , 2, 0}
    int second = deq(&q); // 3 ,{{1,2,3} , 0, 0} 
    printf("%d 그리고 %d", first, second);
    // 2그리고3 출력 
    return 0;
}
 

#include <stdio.h>
#define SIZE 3
 
typedef struct {
    int a[SIZE]; // 3칸짜리 배열 
    int front;
    int rear;
} Queue; // q 구조로 정의한 구조체 
 
void enq(Queue* q, int val){
//1. 첫번째 호출 
// q의 a의 [rear] = 1 
// q.a[0] = 1 

//2. 두번째 호출 
// q의 a의 [1] = 2 

//4. 네번째 호출 
// q의 a의 [2] = 3 
    q->a[q->rear] = val; 
// 첫번째 호출 : q의 rear = q의 rear 값 0 +1 을 하고 %3 을 하셈 
// q.rear = 1 
// 두번째 호출 : q의 rear = q의 rear 값 1 +1 을 하고 %3 을 하셈 
// q.rear = 2
// 네번째 호출 : q의 rear = q의 rear 값 2 +1 을 하고 %3 을 하셈 
// q.rear = 0 
    q->rear = (q->rear + 1) % SIZE;
}
 
int deq(Queue* q) {
//3. 세번째 호출 
// q의 a[q의 front] = val 
//val = a[0] = 1 

//5. 다섯번째 호출 
// q의 a[q의 front =1 ] = val = 2


//6. 여섯번째 호출 
// q의 a[q의 front =2 ] = val = 3 
    int val = q->a[q->front]; 
    
// 세번째 호출 : q의 front 는  q의 원래 (front+1 ) %3 하셈 
// front = 1%3 = 1

//다섯번째 호출 :  q의 front 는  q의 원래 (front+1 ) %3 하셈 
// front = 2%3 = 2
    q->front = (q->front + 1) % SIZE;
    return val;
}
 
int main() {
// 구조체 q 초기화 
    Queue q = {{0}, 0, 0};
 
    enq(&q,1); // {{1,x,x}, 0, 1};
    enq(&q,2); // {{1,2,x}, 0, 2};
    deq(&q);  // {{1,2,x}, 1, 2};
    enq(&q, 3); //{{1,2,3}, 1, 0};
    
    int first = deq(&q); //first =2 , {{1,2,3}, 2, 0}; 
    int second = deq(&q); // second = 3 
    printf("%d 그리고 %d", first, second);
    // 2그리고3 
    // ㅎㅎㅎㅎ 
    return 0;
}

#include <stdio.h>
#define MAX_SIZE 10
// 전처리 문으로 배열의 최대크기를 10으로 정의 

int isWhat[MAX_SIZE]; // 10칸짜리 배열 
int point = -1;
// point 는 전역변수이므로 프로그램리 종료되기 전까지 변수의 값이 저장됨 

int isEmpty() {
    if (point == -1) 
        return 1;
    return 0;
}

int isFull() {
    if (point ==10) return 1;
    return 0;
}

void into(int num) {
    if (point>=10) printf("Full");
    isWhat[++point] = num; // point번의 인덱스에 num 할당 
// point 증가로 인해 into(5) ->  point 는 0이 됨 
}

int take() {
    if (isEmpty()==1) printf("Empty");
        return isWhat[point--]; // isWhat[1] 반환 , 이후 point 는 감소로 인해 0이 됨 
}

int main() {
    into(5); // push ->배열의 0 번 인덱스 -> 5 
    into(2); // push ->배열의 1번 인덱스 -> 2 

    while (!isEmpty()) {
    printf("%d", take()); //pop -> 2 
    into(4); // push -> 배열의 1번 인덱스 -> 4 
    into(1); // push ->배열의 2번 인덱스 -> 1 
    
    printf("%d\n", take()); //pop -> 1  
    into(3); //  push ->배열의 2번 인덱스 -> 3 
    printf("%d\n", take()); //pop -> 3
    printf("%d\n", take()); //pop -> 4
    into(6); // push ->배열의 1 번 인덱스 -> 6
    printf("%d", take()); //pop -> 6
    printf("%d", take()); //pop -> 5 
}
//213465
    return 0;
}

#include <stdio.h>

int increase() {
    static int x=0; // increase() 함수 내에서 계속 값이 저장됨
    // i = 0 첫번째 반복 
    // x = 2 
    // i = 1 두번째 반복 
    // x = 2 + 2 = 4  .. 
    
    x+=2; // x = x + 2 
    return x;
}

int main() {
    int x=0;
    int sum=0;
    int i=0;
    
    for(i=0; i<4; i++) { 
        x++;
        sum+=increase(); 
        // 반복문이 진행되는 4번 동안 increase()의 
        // 정적 변수 x 는 계속 2씩 증가 함 
    }
    
    printf("%d", sum); // 20 출력 
    return 0;
}

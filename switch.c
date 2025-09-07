#include <stdio.h>

int main() {
    int n[3] = {73, 95, 82};
    int i, sum = 0;

    for (i = 0; i < 3; i++) {
        sum += n[i]; // 배열 요소들의 합 
    }

    switch (sum / 30) { // 250/30 = 8.333... sum은 정수형이므로 8 저장 
        case 10:
        case 9:
            printf("A");
            break;
        case 8:  // 먼저 실행 
            printf("B");
        case 7: 
        // break 문이 없기 때문에 fall-through 현상 발생
        // case8 이후의 모든 케이스들이 실행되고 switch 문이 종료됨 
        case 6:
            printf("C");
        default: // case 와 상관없이 기본적으로 마지막으로 실행
            printf("D");
    }
        // BCD 출력 
    return 0;
}

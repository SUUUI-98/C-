#include <stdio.h>

// 배열을 버블 정렬의 한 패스만큼 처리하는 함수
// 이 함수는 n-1-pass_num 만큼 회전
// 가장 큰(혹은 작은) 요소를 배열의 끝(정렬될 위치)으로 보냄
void bubbleSortPass(int arr[], int n, int pass_num) {
    // pass_num은 현재 몇 번째 패스인지 (0부터 시작)
    // 안쪽 루프는 이미 정렬된 뒷부분을 제외하고 비교
    for (int j = 0; j < n - 1 - pass_num; j++) {
        if (arr[j] > arr[j+1]) {
            // 교환 (swap)
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 8, 23};
    int n = sizeof(arr) / sizeof(arr[0]); // 배열 크기 = 5

    // 배열의 초기 상태 출력
    printf("Initial Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // 34 12 56 8 23
    printf("\n");
    
    // 12 34 8 23 56
    // 첫 번째 패스 실행 (pass_num = 0)
    bubbleSortPass(arr, n, 0);

    // 첫 번째 패스 후 배열 상태 출력
    printf("After Pass 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 두 번째 패스 실행 (pass_num = 1)
    bubbleSortPass(arr, n, 1);

    // 두 번째 패스 후 배열 상태 출력
    // 12 8 23 34 56 
    printf("After Pass 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        
    }
    printf("\n");

    return 0;
} 
// 34 12 56 8 23
// 12 34 8 23 56
// 12 8 23 34 56 

#include <stdio.h>
#include <stdlib.h>
 
void set(int** arr, int* data, int rows, int cols) {
    // i = 0 부터 8까지 
    for (int i = 0; i < rows * cols; ++i) {
        arr[((i + 1) / rows) % rows][(i + 1) % cols] = data[i];
    } //2차원 배열 arr[3][3]에 rows 의 요소를 삽입하여 배열을 채움 
      // i = 0 일때 
}     // arr[((0 + 1) / 3) % 3][(0 + 1) % 3] = data[0]
      // arr[0][1] = 5 
      
 // 즉 set함수가 끝나고 arr 의 상태는 
 // arr[0][0] = 9  arr[0][1] = 5  arr[0][2] = 2
 // arr[1][0] = 7  arr[1][1] = 4  arr[1][2] = 1
 // arr[2][0] = 8  arr[2][1] = 3  arr[2][2] = 6
 
int main() {
    int rows = 3, cols = 3, sum = 0;
    int data[] = {5, 2, 7, 4, 1, 8, 3, 6, 9}; 
    int** arr;
    arr = (int**) malloc(sizeof(int*) * rows);
    for (int i = 0; i < cols; i++) {
        arr[i] = (int*) malloc(sizeof(int) * cols); 
        // 이 구간에서 배열 arr 이  동적으로 3*3 2차원 배열이 됨
    }
 
    set(arr, data, rows, cols); 
 
    for (int i = 0; i < rows * cols; i++) { 
        sum += arr[i / rows][i % cols] * (i % 2 == 0 ? 1 : -1); // i%2 가 0이면 1, 아니면-1 
    }// i = 0  
    // sum = sum + arr[0 / 3][0 % 3] * (0 % 2 == 0 ? 1 : -1) 
    // sum = sum + arr[0][0] * 1 = 9 
    // sum = sum + arr[0][1] * -1 = -5
    // sum = sum + arr[0][2] * 1 = 2 ... 이런식으로 진행 
    // 즉 sum 은 9-5+2-7+4-1+8-3+6 = 13 
    for(int i=0; i<rows; i++) {
        free(arr[i]);
    }
    free(arr);
 
    printf("%d", sum); // 13 츨력 
}


#include <stdio.h>
#include <stdlib.h>

//2번째 함수 arr[8] , n = 8 , i = 3 , 2, 1
//               0   1   2   3   4   5   6  7 
//  int arr[] = {42, 17, 23, 99, 8, 65, 77, 3}; 
void spotify(int arr[], int n, int i) {
    int Take = i; // 3 , 2, 1 
    int l = 2*i + 1; 
    //int l 
    //i=3 -> 2*3 + 1 =7  
    //i=2 -> 2*2 + 1 =5
    //i=1 -> 2*1 + 1 =3 
    int r = 2*i + 2;
    //int r 
    //i=3 -> 2*3 + 2 =8
    //i=2 -> 2*2 + 2 =6
    //i=1 -> 2*1 + 2 =4  

    if (l < n && arr[l] > arr[Take])
    //l이 n보다 작고 arr[l]의 값이 arr[Take] 보다 크다면? 
    //i = 3 , l=7 -> 7<8 && arr[7]= 3 > arr[3]= 98 -> false 
    //i = 2 , l=5 -> 5<8 && arr[5] = 65 > arr[2]= 23 -> true, take = 5
    //i=1 , l=3 -> 3<8 && arr[3]>arr[1] ->true , take = 3 
        Take = l;

    if (r < n && arr[r] > arr[Take])
    //r이 n보다 작고 arr[r]의 값이 arr[Take] 보다 크다면? 
    //i = 3 , r=8 -> 8<8 && arr[8]= 3 > arr[3]= 98 -> false 
        Take = r;

    if (Take != i) { 
    //i = 2 , take = 5 
    //i = 1 , take = 3 
        int temp = arr[i]; 
        // arr[2] = 23
        // arr[1] = 17
        arr[i] = arr[Take];
        //arr[2] = 65 
        //arr[1] = 99
        
        arr[Take] = temp; 
        // arr[5] = 23
        // arr[3] = 17  
        spotify(arr, n, Take);
    }
}
//1. 함수   8칸 짜리 arr , n= 8 
void build(int arr[], int n) {
    for (int i = n/2 - 1; i >= 0; i--) //i = 8/2 - 1 = 3 
    //i = 3 , i >=0 동안 감소시킴 
    //i = 3 
    //i = 2 
    //i = 1 
        spotify(arr, n, i);
}
//8칸 짜리 arr , n= 8 
void sudden(int arr[], int n) {
    build(arr, n);
    for (int i = 0; i < 3 && n > 0; i++) {
        printf("%d ", arr[0]);
        arr[0] = arr[n - 1];
        n--;
       spotify(arr, n, 0);
    }
}

int main() {    //0  1   2    3  4  5   6   7
    int arr[] = {42, 17, 23, 99, 8, 65, 77, 3};
    int n = sizeof(arr)/sizeof(arr[0]); // (4*8)/4 = 8 
    sudden(arr, n);
    return 0;
}

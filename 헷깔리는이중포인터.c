#include <stdio.h>

void func(int **arr, int size) { 
//배열을 가리키는 주소가 인자로 전달되었기 때문에 
//이 함수에서 변화된 값은 메모리 값 자체가 바뀐 것  
    int i;
    for (i=0; i<size; i++) { 
       //(*(*arr+i)+i) -> arr의 i번째 인덱스 값에 i를 더한 값 
        *(*arr+i) = (*(*arr+i)+i) % size;
        // arr의 i번째 인덱스 = arr[i] + i % size 
        
        // arr[0] = (3+0)%5 = 3 
        // arr[1] = (1+1)%5 = 2 
        // arr[2] = (4+2)%5 = 1 
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5};
    int *p = arr; // 배열 arr의 주소를 가리키는 p 
    int **pp = &p; // 포인터 변수 p의 주소를 가리키는 pp 

    func(pp, 5);
    
    printf("%d", arr[2]);
    // 1 출력 
    return 0;
}

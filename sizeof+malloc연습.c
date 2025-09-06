#include <stdio.h>
#include <stdlib.h>
  //문제 기준 32비트 

int main() {
    char a = 'c';
    int b = 10; 
    int c[10]; 
    int* d = c;
    int e[10][10];
    float f;
    double g;
    int* h;
    char* i = "Hello";

    h = (int*)malloc(40); 
    //malloc(40)으로 동적 할당된 40바이트 메모리는 h가 가리키는 대상의 크기임
    // h는 위에 이미 포인터 변수로 선언된거기 때문에 h의 크기가 아닌 h가 가리키는 대상의 크기에 메모리를 할당하는 것임 
    //즉 h 변수 자체의 크기가 아님

    printf("%d %d %d\n", sizeof(char), sizeof(int), sizeof(float)); // 1  4  4 
    
    //자료형과 관계없이 포인터의 크기는 가리키는 주소의 크기에 의해 결정 
    //32비트일 경우 메모리 주소가 32bit =4바이트로 표시되어 4 
    //64비트일 경우 메모리 주소가 64bit =8바이트 로 표시되어 8 
  
    
    printf("%d %d %d\n", sizeof(double), sizeof(char*), sizeof(int*)); 
    
    
    printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c)); // 1  4  c는 정수형 배열이므로 -> int(4) * 10 = 40 
    printf("%d %d %d\n", sizeof(d), sizeof(e), sizeof(e[0])); // 4  e는 2차원 배열이므로 int(4)*10*10 =400 
    // sizeof(e[0]) -> e의 0번째 행 이므로 10 개 -> int(4) * 10 = 40 
    printf("%d %d %d %d", sizeof(f), sizeof(g), sizeof(h), sizeof(i));// 4 8 4 
    //*char은 문자형 포인터이기 때문에 저장된 값의 크기가 출력되는게 아닌 *char의 크기 자체가 출력됨 

    free(h); // h 할당 공간 해제 

    return 0;
}

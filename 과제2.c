//과제 2번 
#include <stdio.h>
#define row 4// row, col을 4, 2로 설정하였지만 다른 값을 입력하여도 그에 맞는 배열이 생성 가능합니다.
#define col 2
int main() {
    int i, j;
    int arr[row][col];


    for (i = 0; i < row; i++) {//이중 for문을 이용하여 배열값을 입력 받는 코드.
        for (j = 0; j < col; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf_s("%d", &arr[i][j]);
            printf("\n");
        }
    }
    puts("\n");
    for (i = 0; i < row; i++) {// 앞에서 입력받은 배열값을 이중 for문을 이용해 출력하는 코드.
        for (j = 0; j < col; j++) {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }
}


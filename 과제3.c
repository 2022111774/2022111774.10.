//과제 3번
#include <stdio.h>
#define l 2 //행렬A의 행
#define m 2 //행렬A의 열, 행렬B의 행 
#define n 2 //행렬B의 열

int main(void) {
    int i, j, k;
    int A[l][m];
    int B[m][n];
    int C[l][n]; // C = A ⅹ B
    for (i = 0; i < l; i++) {//2중 for문을 이용하여 행렬A의 값을 입력받는 코드
        for (j = 0; j < m; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf_s("%d", &A[i][j]); //행렬A을 입력받음
            printf("\n");
        }
    }
    for (i = 0; i < m; i++) {//2중 for문을 이용하여 행렬B의 값을 입력받음
        for (j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf_s("%d", &B[i][j]); //B행렬을 입력받음
            printf("\n");
        }
    }
    for (i = 0; i < l; i++)//2중 for문을 이용하여 행렬A와 행렬B의 곱을 행렬C에 입력하는 코드
        for (j = 0; j < n; j++) {
            C[i][j] = 0;
            for (k = 0; k < m; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    for (i = 0; i < 3; i++) {//위에서 계산된 행렬C의 값을 출력
        for (j = 0; j < n; j++)
            printf("C[%d][%d]=%d\t", i, j, C[i][j]);
        printf("\n");
    }
    return 0;
}

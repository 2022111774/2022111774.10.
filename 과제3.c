//���� 3��
#include <stdio.h>
#define l 2 //���A�� ��
#define m 2 //���A�� ��, ���B�� �� 
#define n 2 //���B�� ��

int main(void) {
    int i, j, k;
    int A[l][m];
    int B[m][n];
    int C[l][n]; // C = A �� B
    for (i = 0; i < l; i++) {//2�� for���� �̿��Ͽ� ���A�� ���� �Է¹޴� �ڵ�
        for (j = 0; j < m; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf_s("%d", &A[i][j]); //���A�� �Է¹���
            printf("\n");
        }
    }
    for (i = 0; i < m; i++) {//2�� for���� �̿��Ͽ� ���B�� ���� �Է¹���
        for (j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf_s("%d", &B[i][j]); //B����� �Է¹���
            printf("\n");
        }
    }
    for (i = 0; i < l; i++)//2�� for���� �̿��Ͽ� ���A�� ���B�� ���� ���C�� �Է��ϴ� �ڵ�
        for (j = 0; j < n; j++) {
            C[i][j] = 0;
            for (k = 0; k < m; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    for (i = 0; i < 3; i++) {//������ ���� ���C�� ���� ���
        for (j = 0; j < n; j++)
            printf("C[%d][%d]=%d\t", i, j, C[i][j]);
        printf("\n");
    }
    return 0;
}

//���� 2�� 
#include <stdio.h>
#define row 4// row, col�� 4, 2�� �����Ͽ����� �ٸ� ���� �Է��Ͽ��� �׿� �´� �迭�� ���� �����մϴ�.
#define col 2
int main() {
    int i, j;
    int arr[row][col];


    for (i = 0; i < row; i++) {//���� for���� �̿��Ͽ� �迭���� �Է� �޴� �ڵ�.
        for (j = 0; j < col; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf_s("%d", &arr[i][j]);
            printf("\n");
        }
    }
    puts("\n");
    for (i = 0; i < row; i++) {// �տ��� �Է¹��� �迭���� ���� for���� �̿��� ����ϴ� �ڵ�.
        for (j = 0; j < col; j++) {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }
}


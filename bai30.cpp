#include <stdio.h>
int main()
{
    int m, n;
    do
    {
        printf("Nhap so hang cua ma tran: ");
        scanf("%d", &m);
        printf("Nhap so cot cua ma tran:");
        scanf("%d", &n);
    } while (m < 0 || n < 0);
    int a[100][100];
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nCac phan tu tren hang 1: ");
    for (j = 0; j < n; j++)
    {
        printf("%d ", a[0][j]);
    }
    int k;
    do
    {
        printf("\nNhap k:");
        scanf("%d", &k);
    } while (k < 0 || k > n);
    int sum = 0;
    for (i = 0; i < m; i++)
    {
        sum += a[i][k];
    }
    printf("\nTrung binh cong cac phan tu cot %d la: %.3f", k, (float)sum / m);
    return 0;
}
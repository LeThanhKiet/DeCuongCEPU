#include <stdio.h>
int main()
{
    int m, n;
    do
    {
        printf("Nhap so hang cua ma tran: ");
        scanf("%d", &m);
    } while (m < 0);
    do
    {
        printf("Nhap so cot cua ma tran:");
        scanf("%d", &n);
    } while (n < 0);
    float a[100][100];
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Ma tran :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.3f  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nPhan tu tren cot 1 cua ma tran: ");
    for (i = 0; i < m; i++)
    {
        printf("%.3f  ", a[i][0]);
    }
    int k;
    do
    {
        printf("\nNhap hang k: ");
        scanf("%d", &k);
    } while (k < 0 || k > m);
    float T = 1;
    for (i = 0; i < n; i++)
    {
        T *= a[k - 1][i];
    }
    printf("\nTich cac phan tu thuoc hang thu %d : %.3f", k, T);
    return 0;
}
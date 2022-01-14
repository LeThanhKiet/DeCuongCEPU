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
        printf("Nhap so cot cua ma tran: ");
        scanf("%d", &n);
    } while (n < 0);
    float a[100][100];
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Ma tran vua nhap la: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.3f  ", a[i][j]);
        }
        printf("\n");
    }
    float min = a[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    printf("\nGia tri nho nhat cua ma tran la:%.3f", min);
    int k;
    do
    {
        printf("\nNhap so k: ");
        scanf("%d", &k);
    } while (k < 0 || k > n);
    float sum = 0;
    for (i = 0; i < m; i++)
    {
        sum += a[i][k - 1];
    }
    printf("\nTong cac phan tu tren cot thu %d la: %.3f", k, sum);
    return 0;
}
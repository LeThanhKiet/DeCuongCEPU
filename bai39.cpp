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
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran vua nhap la: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
    }
    printf("\nTrung binh cong cac phan tu cua mang la:%.3f", sum / (m * n));
    int k;
    float volume = 0;
    do
    {
        printf("Nhap hang k: ");
        scanf("%d", &k);
    } while (k < 0 || k > m);
    for (i = 0; i < n; i++)
    {
        volume *= a[k][i];
    }
    printf("\nTich cac phan tu thuoc hang %d la: %.3f", k, volume);
    return 0;
}
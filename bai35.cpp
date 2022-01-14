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
    int a[100][100];
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran vua nhap la:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d   ", a[i][j]);
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
    printf("\nTrung binh cong cac phan tu cua ma tran la:%.3f ", (float)sum / (m * n));
    int sum = 0;
    for (j = 0; j < n; j++)
    {
        sum += a[m - 1][j];
    }
    printf("\nTrung binh cong cac phan tu hang cuoi cung la:%.3f", (float)sum / n);
    return 0;
}
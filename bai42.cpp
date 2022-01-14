#include <stdio.h>
int main()
{
    int n, m;
    do
    {
        printf("Nhap so hang cua ma tran: ");
        scanf("%d", &n);
    } while (n < 0);
    do
    {
        printf("Nhap so cot cua ma tran: ");
        scanf("%d", &m);
    } while (m < 0);
    int a[100][100];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran vua nhap la: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("\nKhong co phan tu le trong ma tran!!!");
    }
    else
    {
        printf("\nCo %d phan tu le trong ma tran!!!", count);
    }
    int dem = 0;
    for (i = 0; i < m; i++)
    {
        if (a[0][i] % 2 == 0)
        {
            dem++;
        }
    }
    if (dem == 0)
    {
        printf("\nHang 1 khong co so chan");
    }
    else
    {
        printf("\nPhan tu chan trong hang 1 cua ma tran: ");
        for (i = 0; i < m; i++)
        {
            if (a[0][i] % 2 == 0)
            {
                printf("%d ", a[0][i]);
            }
        }
    }
    return 0;
}

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
        printf("Nhap so cot cua ma: ");
        scanf("%d", &n);
    } while (n < 0);
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
    printf("Ma tran vua nhap la: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                count++;
            }
        }
    }
    if (count != 0)
    {
        printf("\nCac phan tu le co trong ma tran la: ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i][j] % 2 != 0)
                {
                    printf("%d  ", a[i][j]);
                }
            }
        }
    }
    else
    {
        printf("\nKhong co so le trong ma tran!!!");
    }
    int k;
    do
    {
        printf("\nNhap cot k: ");
        scanf("%d", &k);
    } while (k < 0 || k > n);
    int sum = 0;
    for (i = 0; i < m; i++)
    {
        sum += a[i][k - 1];
    }
    printf("\nTrung binh cong cac phan tu cot %d la:%.3f", k, (float)sum / m);
    return 0;
}
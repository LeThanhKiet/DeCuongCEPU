#include <stdio.h>
int main()
{
    int n, m;
    do
    {
        printf("nhap so hang cua ma tran: ");
        scanf("%d", &n);
    } while (n < 0);
    do
    {
        printf("Nhap so cot cua ma tran: ");
        scanf("%d", &m);
    } while (m < 0);
    float a[100][100];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Ma tran vua nhap la: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%.3f  ", a[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if ((int)a[i][j] % 5 == 0)
            {
                count++;
            }
        }
    }
    if (count != 0)
    {
        printf("\nCac phan tu chia het cho 5 trong ma tran: ");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if ((int)a[i][j] % 5 == 0)
                {
                    printf("%.3f  ", a[i][j]);
                }
            }
        }
    }
    else
    {
        printf("\nKhong co so chia het cho 5 trong ma tran!!!");
    }
    float max = a[0][0];
    for (i = 0; i < m; i++)
    {
        if (a[0][i] > max)
        {
            max = a[0][i];
        }
    }
    printf("\nPhan tu lon nhat tren hang thu nhat la:%.3f", max);
    return 0;
}
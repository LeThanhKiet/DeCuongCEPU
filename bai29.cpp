#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap cap cua ma tran: ");
        scanf("%d", &n);
    } while (n < 0);
    int a[100][100];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int max = a[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("\nSo lon nhat trong ma tran la:%d", max);
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    printf("\nTong cac phan tu thuoc duong cheo chinh la:%d", sum);
    return 0;
}
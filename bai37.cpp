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
    printf("\nMa tran vua nhap la: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                count++;
            }
        }
    }
    if (count != 0)
    {
        printf("\nCac phan tu chan cua ma tran la: ");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i][j] % 2 == 0)
                {
                    printf("%d  ", a[i][j]);
                }
            }
        }
    }
    else
    {
        printf("\nMa tran khong co phan tu chan");
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    printf("\nTong cac phan tu cua phan cheo chinh la:%d", sum);
    return 0;
}

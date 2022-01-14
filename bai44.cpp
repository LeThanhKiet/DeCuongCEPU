#include <stdio.h>
int main()
{
    int n, m;
    do
    {
        printf("Nhap so hang cua ma tran: ");
        scanf("%d", &n);
        printf("Nhap so cot cua ma tran: ");
        scanf("%d", &m);
    } while (n < 0 || m < 0);
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
    printf("Ma tran vua nhao la: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
    }
    printf("\nTong cac phan tu cua ma tran:%d", sum);
    int min = a[0][0];
    int x = 0;
    int y = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("\nGia tri nho nhat co trong mang la:%d tai vi tri a[%d][%d]", min, x + 1, y + 1);
    return 0;
}
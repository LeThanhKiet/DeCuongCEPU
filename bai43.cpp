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
    int k;
    do
    {
        printf("\nNhap hang k: ");
        scanf("%d", &k);
    } while (k < 0 || k > n);
    float sum = 0;
    for (i = 0; i < m; i++)
    {
        sum += a[k][i];
    }
    printf("\nTong cac phan tu tren hang %d la:%.3f", k, sum);
    float max = a[0][0];
    int x = 0;
    int y = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }
    printf("\nGia tri lon nhat trong mang la:%.3f - tai vi tri a[%d][%d]", max, x, y);
    return 0;
}
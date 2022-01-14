#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap cap cua ma tran: ");
        scanf("%d", &n);
    } while (n < 0);
    float a[100][100];
    int i, j;
    printf("\nNhap cac phan tu cua ma tran: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("\nMa tran vua nhap: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.3f  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nCac phan tu tren cot 1 la: ");
    for (i = 0; i < n; i++)
    {
        printf("%.3f  ", a[i][0]);
    }
    int k = 0;
    while (k < n)
    {
        int sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += a[i][k];
        }
        printf("\nTong cac phan tu tren cot thu %d la : %d", k, sum);
        k++;
    }
    return 0;
}
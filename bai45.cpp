#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 2 || n > 5);
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
    printf("Ma tran vua nhap la: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int k;
    do
    {
        printf("\nNhap hang k:");
        scanf("%d", &k);
    } while (k < 0 || k > n);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[k - 1][i] > 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nTren hang %d khong co phan tu duong!!!", k);
    }
    else
    {
        printf("\nCo %d phan tu duong tren hang %d!!!", count, k);
    }
    return 0;
}
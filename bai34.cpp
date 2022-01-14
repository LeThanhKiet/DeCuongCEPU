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
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran vua nhap la: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d    ", a[i][j]);
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
    printf("\nTong cac phan tu cua ma tran la:%d", sum);
    // tọa biến x để gán vị trí tìm đc của phần tử lớn nhất trên cột 1 vào x
    int max = a[0][0];
    int x = 0;
    for (i = 0; i < m; i++)
    {
        if (a[i][0] > max)
        {
            max = a[i][0];
            x = i;
        }
    }
    printf("\nPhan tu lon nhat tren cot 1 la:%d - tai  vi tri(%d - 1,1)", max, x);
    return 0;
}
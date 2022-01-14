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
    printf("Ma tran vua nhap la:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
    int min = a[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    printf("\nGia tri nho nhat co trong mang la:%d", min);
    //Tìm các phần tử là số âm % 5.In ra giá trị vị trí các phần tử tìm được.
    //thuật toán: tạo 3 mảng mới có kích thước m x n, mảng k dùng để lưu giá trị thỏa mãn đề bài
    //Thuật toán: Mảng x,y dùng để lưu vị trí của phần tử đó theo hàng và cột.
    int count = 0;
    int k[100], x[100], y[100];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < 0 && a[i][j] % 5 == 0)
            {
                k[count] = a[i][j];
                x[count] = i;
                y[count] = j;
                count++;
            }
        }
    }
    if (count != 0)
    {
        printf("\nPhan tu am chia het cho 5 la:");
        for (i = 0; i < count; i++)
        {
            printf("%d - tai vi tri A[%d - %d]", k[count], x[i], y[i]);
        }
    }
    else
    {
        printf("\nTrong ma tran khong co phan tu am chia het cho 5");
    }
    return 0;
}
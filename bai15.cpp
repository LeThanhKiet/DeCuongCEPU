#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("So phan tu cua mang la: ");
        scanf("%d", &n);
    } while (n < 0);
    int a[100];
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Cac phan cua cua mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("\nTrung binh cong cac gia tri trong mang la: %.3f", (float)sum / n);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    int min = 1e9;
    if (count != 0)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0 && a[i] < min)
            {
                min = a[i];
            }
        }
        printf("\nSo duong nho nhat trong mang la:%d", min);
    }
    else
    {
        printf("\nKhong co so duong trong mang!!!");
    }
    return 0;
}
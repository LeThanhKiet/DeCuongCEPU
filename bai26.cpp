#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("So phan tu cua mang la: ");
        scanf("%d", &n);
    } while (n < 0);
    float a[100];
    int i;
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
    printf("Cac phan tu cua mang la: ");
    for (i = 0; i < n; i++)
    {
        printf("%.3f  ", a[i]);
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("\nCac gia tri am trong mang la:");
        for (i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                printf("%.3f  ", a[i]);
            }
        }
    }
    else
    {
        printf("\nKhong co gia tri am trong mang!!!");
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 30 && a[i] <= 150.5)
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("\nSo phan tu nam trong khoang 30 den 150.5 la: %d", count);
    }
    else
    {
        printf("\nKhong co phan tu nam trong khoang tu 30 den 150.5!!!");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap so phan tu cua mang : ");
        scanf("%d", &n);
    } while (n < 0);
    float a[100];
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.3f  ", a[i]);
    }
    int j;
    // bubble sort
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSap xep theo thu tu giam dan: ");
    for (i = 0; i < n; i++)
    {
        printf("%.3f  ", a[i]);
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    float minPositive = 1e9;
    if (count != 0)
    {
        for (i = 1; i < n; i++)
        {
            if (a[i] > 0 && a[i] < minPositive)
            {
                minPositive = a[i];
            }
        }
        printf("\nSo duong nho nhat trong mang la:%.3f", minPositive);
    }
    else
    {
        printf("\nKhong co so duong trong mang!!!");
    }
    return 0;
}
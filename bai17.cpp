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
    float min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nGia tri nho nhat trong mang la: %.3f ", min);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count++;
        }
    }
    float maxNegative = -1e9;
    if (count != 0)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] < 0 && a[i] > maxNegative)
            {
                maxNegative = a[i];
            }
        }
        printf("\nSo am lon nhat trong mang la:%.3f ", maxNegative);
    }
    else
    {
        printf("\nKhong co so am!!!!");
    }
    return 0;
}
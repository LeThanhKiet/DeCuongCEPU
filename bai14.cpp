#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap so phan tu cua mang: ");
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
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    float min = 1e9;
    if (count != 0)
    {
        printf("\nCac phan tu duong co trong mang la: ");
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                printf("%.3f  ", a[i]);
                if (a[i] == (int)a[i])
                {
                    if ((int)a[i] % 2 == 0 && a[i] < min)
                    {
                        min = a[i];
                    }
                }
            }
        }
        printf("\nPhan tu duong nho nhat trong mang la:%.3f", min);
    }
    else
    {
        printf("\nKhong co phan tu duong trong mang!!!");
    }
    return 0;
}
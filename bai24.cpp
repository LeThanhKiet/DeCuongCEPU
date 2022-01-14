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
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("\nTong cac phan tu trong mang la:%.3f ", sum);
    float x;
    printf("\nNhap x: ");
    scanf("%f", &x);
    int flag = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = 1;
            a[i] = 0;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag = 1)
    {
        printf("\nTim thay gia tri %f trong mang", x);
    }
    else
    {
        printf("\nKhong ton tai %f trong mang", x);
    }
    printf("\nThay the cac phan tu = %f thanh 0: ", x);
    for (int i = 0; i < n; ++i)
    {
        printf("%.3f  ", a[i]);
    }
    return 0;
}
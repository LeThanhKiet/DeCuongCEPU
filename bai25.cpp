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
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 10.5 && a[i] <= 100)
        {
            sum += a[i];
            count++;
        }
    }
    if (count != 0)
    {
        printf("\nTrung binh cong cac gia tri nam trong doan tu 10.5 den 100 la:%.3f", sum / count);
    }
    else
    {
        printf("\nKhong co gia tri nam trong doan tu 10.5 den 100 ==> khong co TBC!!!");
    }
    float max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nGia tri lon nhat trong mang la:%.3f", max);
    return 0;
}
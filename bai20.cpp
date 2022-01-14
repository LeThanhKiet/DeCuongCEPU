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
    float x;
    printf("\nNhap x: ");
    scanf("%f", &x);
    int flag = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("Tim thay phan tu %.3f trong mang!!!", x);
    }
    else
    {
        printf("Khong tim thay phan tu %.3f trong mang!!!", x);
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    float sum = 0;
    if (count != 0)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                sum += a[i];
            }
        }
        printf("\nTrung binh cong cac so duong trong mang la:%.3f ", sum / count);
    }
    else
    {
        printf("\nKhong co so duong trong mang -> Khong co TBC!!!");
    }
    return 0;
}
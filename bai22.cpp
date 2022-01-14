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
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Cac phan tu cua mang la: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 9)
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("\nCac phan tu co gia tri lon hon 9 la: ");
        for (i = 0; i < n; i++)
        {
            if (a[i] > 9)
            {
                printf("%d ", a[i]);
            }
        }
    }
    else
    {
        printf("\nKhong co phan tu lon hon 9 trong mang!!!");
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 7 == 0)
        {
            count++;
        }
    }
    if (count != 0)
    {
        int sum = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] % 7 == 0)
            {
                sum += a[i];
            }
        }
        printf("\nTrung binh cong cac phan tu chia het cho 7 la:%.3f", (float)sum / count);
    }
    else
    {
        printf("\nKhong co phan tu chia het cho 7 trong mang -> Khong co TBC!!!");
    }
    return 0;
}
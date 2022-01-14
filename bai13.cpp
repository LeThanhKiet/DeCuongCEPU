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
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("\nCac phan tu lon hon 0 cua mang la: ");
        float sum = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                printf("%.3f ", a[i]);
                sum += a[i];
            }
        }
        printf("\nTrung binh cong cac phan tu duong trong mang la:%.3f", sum / count);
    }
    else
    {
        printf("\nKhong co phan tu lon hon 0 trong mang -> Khong co TBC!!!");
    }
    return 0;
}
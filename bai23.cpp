#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap so phan tu cua mang : ");
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
    int max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nPhan tu lon nhat trong mang la:%d ", max);
    int sum = 0;
    int count = 0;
    for (i = 1; i < n; i += 2)
    {
        sum += a[i];
        count++;
    }
    printf("\nTrung binh cong cac phan tu o vi tri le cua mang la:%.3f", (float)sum / count);
    return 0;
}
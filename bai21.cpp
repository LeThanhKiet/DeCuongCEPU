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
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("\nCac phan tu chan co trong mang la: ");
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                printf("%d  ", a[i]);
            }
        }
    }
    else
    {
        printf("\nKhong co phan tu chan trong mang!!!");
    }
    int sum = 0;
    for (i = 0; i < n; i += 2)
    {
        sum += a[i];
    }
    printf("\nTong cac phan tu o vi tri chan la:%d ", sum);
    return 0;
}
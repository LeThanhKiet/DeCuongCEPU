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
    printf("\nGia tri lon nhat trong mang la:%d ", max);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    int maxEven = -1e9;
    if (count != 0)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0 && a[i] > maxEven)
            {
                maxEven = a[i];
            }
        }
        printf("\nSo chan lon nhat trong mang la:%d ", maxEven);
    }
    else
    {
        printf("\nKhong co so chan trong mang!!!");
    }
    return 0;
}
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
    // bubble sort
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSap xep phan tu theo thu tu giam dan: ");
    for (i = 0; i < n; i++)
    {
        printf("%.3f  ", a[i]);
    }
    int flag = 1;
    for (i = 0; i < n; i++)
    {
        if ((int)a[i] == a[i])
        {
            if ((int)a[i] == 5)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("\n5 co trong mang!!!");
    }
    else
    {
        printf("\n5 khong co trong mang!!!");
    }
    return 0;
}
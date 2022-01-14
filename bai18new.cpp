#include <stdio.h>
#include <math.h>

int isPrimeNums(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        int count = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ++count;
            }
        }
        if (count == 0)
        {
            return 1;
        }
        return 0;
    }
}

int isSquareNums(int n)
{
    int sqr = sqrt(n);
    if (sqr * sqr != n)
    {
        return 0;
    }
    return 1;
}

void nhap(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 0);
    int a[100];

    printf("\nNhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // nhap(a, n); hàm

    printf("\nMang vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    // xuat(a, n); hàm

    printf("\nCac so nguyen to co trong mang: ");
    for (int i = 0; i < n; i++)
    {
        if (isPrimeNums(a[i]) == 1)
        {
            printf("%d  ", a[i]);
        }
    }

    printf("\nCac so chinh phuong co trong mang: ");
    // dùng hàm
    for (int i = 0; i < n; i++)
    {
        if (isSquareNums(a[i]))
        {
            printf("%d  ", a[i]);
        }
    }

    // không dùng hàm
    /*
    for (int i = 0; i < n; i++)
    {
        int sqr = sqrt(a[i]);
        if (sqr * sqr == a[i])
        {
            printf("%d  ", a[i]);
        }
    }
    */
    return 0;
}

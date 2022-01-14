#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Nhap n");
    scanf("%d", &n);
    int T = 3 * pow(n, 3) + 2 * pow(n, 2) + 1;
    printf("Ket qua: %d", T);
    int sum = 0;
    for (int i = 2; i < n; i += 2)
    {
        sum += i;
    }
    printf("\nTong so chan trong (1,%d) la:%d", n, sum);

    /*
    SNT: 2 ướ (1 và chính nó)
    Kiểm tra nếu có thêm 1 ước nữa (ước = 3) thì không là SNT và ngược lại
    */

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
        printf("\n%d la SNT", n);
    }
    else
    {
        printf("\n%d khong la SNT", n);
    }
    return 0;
}
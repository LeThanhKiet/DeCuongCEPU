#include <stdio.h>
int main()
{
	int n;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	} while (n < 1 || n > 100);
	int i;
	printf("Day so le tu 1 den %d la:", n);
	for (i = 1; i <= n; i += 2)
	{
		printf("%d  ", i);
	}
	int sum = 0;
	for (i = 3; i <= n; i += 3)
	{
		sum = sum + i;
	}
	printf("\nTong cac so chia het cho 3 trong khoang tu 1 den %d la: %d", n, sum);
	sum = 0;
	int dem;
	for (i = 10; i <= n; i += 10)
	{
		sum = sum + i;
		dem++;
	}
	printf("\nTrung binh cong cac so chan chia het cho 5 trong khoang tu 1 den %d la:%.3f", n, (float)sum / dem);
	return 0;
}
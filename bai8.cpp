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
	printf("Day so tu 1 den %d: ", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", i);
	}
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
		}
	}
	printf("\nTong cac so chan trong khoang tu 1 den %d la:%d", n, sum);
	sum = 0;
	int dem = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 6 == 0)
		{
			sum += i;
			dem++;
		}
	}
	printf("\nTrung binh cong cac chan chia het cho 3 tu 1 den %d la:%.3f", n, (float)sum / dem);
	return 0;
}
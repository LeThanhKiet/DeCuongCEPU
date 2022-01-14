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
	printf("Day so tu 1 den %d la:", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d  ", i);
	}
	printf("\nCac so chia het cho 7 trong khoang tu 1 den %d la:", n);
	for (i = 1; i <= n; i++)
	{
		if (i % 7 == 0)
		{
			printf("%d  ", i);
		}
	}
	int sum = 0;
	int dem = 0;
	if (n < 14)
	{
		printf("\nKhong co gia tri trung binh cong cua cac so chan chia het cho 7");
	}
	else
	{
		for (i = 14; i <= n; i += 14)
		{
			sum += i;
			dem++;
		}
		printf("\nTrung binh cong cac so chan chia het cho 7 trong khoang tu 1 den %d la:%.3f", n, (float)sum / dem);
	}
	return 0;
}
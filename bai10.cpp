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
	int sum = 0;
	printf("Cac so lon hon 5 tu 1 den %d la:", n);
	for (i = 6; i <= n; i++)
	{
		sum += i;
		printf("%d  ", i);
	}
	printf("\nTong cac so lon hon 5 tu 1 den %d la:%d", n, sum);
	sum = 0;
	int dem = 0;
	for (i = 6; i <= n; i += 2)
	{
		sum += i;
		dem++;
	}
	printf("\nTrung binh cong cac so chan lon hon 5 tu 1 den %d la: %.3f", n, (float)sum / dem);
	return 0;
}
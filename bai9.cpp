#include <stdio.h>
int main()
{
	int n;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	} while (n < 1 || n > 500);
	int i;
	printf("Cac so chan trong khoang tu  1 den %d la: ", n);
	for (i = 2; i <= n; i += 2)
	{
		printf("%d ", i);
	}
	int x;
	do
	{
		printf("\nNhap x: ");
		scanf("%d", &x);
	} while (x < 1 || x > n);
	int sum = 0;
	int dem = 0;
	for (i = x; i <= n; i++)
	{
		sum = sum + i;
		dem++;
	}
	printf("Trung binh cong cac so tu %d den %d la: %.3f", x, n, (float)sum / dem);
	return 0;
}
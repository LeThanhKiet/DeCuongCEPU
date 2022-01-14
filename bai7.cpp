#include <stdio.h>
int main()
{
	int x, y;
	do
	{
		printf("Nhap vao x: ");
		scanf("%d", &x);
		printf("Nhap vao y: ");
		scanf("%d", &y);
	} while (x > y);
	int tong = x + y;
	printf("Tong %x va %d la:%d", x, y, tong);
	int i, sum = 0;
	for (i = x; i <= y; i++)
	{
		sum = sum + i;
	}
	printf("\nTong tu %d den %d la:%d", x, y, sum);
	printf("\nCac so chan trong khoang tu %d den %d la:", x, y);
	for (i = x; i <= y; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d  ", i);
		}
	}

	return 0;
}
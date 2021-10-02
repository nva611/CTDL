#include <stdio.h>

int main()
{
	int n, i;
	int f1 = 1, f2 = 2;
	int f3;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for(i = 3; i <= n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	
	printf("F(%d) = %d", n, f3);
	
	return 0;
}

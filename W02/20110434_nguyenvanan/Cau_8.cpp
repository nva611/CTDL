#include <stdio.h>

int main()
{
	int a[10];
	a[0] = 0;
	a[1] = 1;
	int x, i;
	
	printf("Nhap chi so: ");
	scanf("%d", &x);
	
	for(i=2; i<=x; i++)
		a[i] = a[i-1] + a[i-2];
	
	printf("a[%d] = %d", x, a[x]);
	
	return 0;
}

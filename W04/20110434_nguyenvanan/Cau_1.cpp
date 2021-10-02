#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p1, n, i;
	int tong = 0;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	p1 = (int*)malloc(n*sizeof(n));
	printf("Nhap mang: ");
	for(i=0; i<n; i++)
		scanf("%d", &p1[i]);
	
	for(i=0; i<n; i++)
		tong += p1[i];
		
	printf("Tong: %d", tong);
	free(p1);
	return 0;
}

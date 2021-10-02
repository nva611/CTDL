#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *p;
	int tong = 0;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	p = (int*)malloc((n+1)*sizeof(n));
	p[0] = n;
	
	printf("Nhap mang: ");
	for(i=1; i<=n; i++)
		scanf("%d", &p[i]);
		
	for(i=1; i<=n; i++)
		tong += p[i];
	
	printf("Tong: %d", tong);
	
	free(p);
	return 0;
}

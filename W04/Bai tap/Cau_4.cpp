#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **p, i, j, n;
	int tong;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	p = (int**)malloc((n+1)*sizeof(int*));
	p[0] = (int*)malloc((n+1)*sizeof(int));
	
	p[0][0] = n;
	
	printf("Nhap so luong phan tu cho cac mang: ");
	for(i=1; i<=n; i++)
		scanf("%d", &p[0][i]);
	
	for(i=1; i<=n; i++)
		p[i] = (int*)malloc((p[0][i])*sizeof(int));
		
	for(i=1; i<=n; i++)
	{
		printf("Nhap mang %d: ", i);
		for(j=0; j<p[0][i]; j++)
			scanf("%d", &p[i][j]);
	}
	
	for(i=1; i<=n; i++)
	{
		tong = 0;
		for(j=0; j<p[0][i]; j++)
			tong += p[i][j];
		printf("Tong mang %d: %d\n", i, tong);
	}
	for(i=0; i<=n; i++)
		free(p[i]);
	free(p);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
void nhapMang(int **X, int n);
void tinhTongTungMang(int **X);
int main()
{
	int **M, n, i;
	printf("Nhap so mang: ");
	scanf("%d", &n);
	
	M = (int**)malloc((n+1)*sizeof(int*));
	M[0] = (int*)malloc((n+1)*sizeof(int));
	M[0][0] = n;
	nhapMang(M, n);	
	
	tinhTongTungMang(M);
	
	for(i=0; i<=n; i++)
		free(M[i]);
	free(M);
	
	return 0;
}
void nhapMang(int **X, int n)
{
	int i, j;
	printf("Nhap so luong phan tu cho cac mang: ");
	for(i=1; i<=n; i++)
	{
		scanf("%d", &X[0][i]);
		X[i] = (int*)malloc((X[0][i])*sizeof(int));
	}
	for(i = 1; i<=n; i++)
	{
		printf("Nhap mang %d: ", i);
		for(j=0; j<X[0][i]; j++)
			scanf("%d", &X[i][j]);
	}
}
void tinhTongTungMang(int **X)
{
	int i, j, tong;
	for(i=1; i<=X[0][0]; i++)
	{
		tong = 0;
		for(j=0; j<X[0][i]; j++)
			tong += X[i][j];
		printf("Tong mang %d: %d\n", i, tong);
	}
}


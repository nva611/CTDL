#include <stdio.h>
#include <stdlib.h>
void mangCoNhieuSNT(int **P, int *A, int n);
void tongTungMang(int **P, int *A, int n);
int demSoNguyenTo(int *A, int n);
int laSoNguyenTo(int x);
int main()
{
	int **P, *A, n;
	
	int i, j;
	printf("Nhap n va n_i : ");
	
	scanf("%d", &n);
	P = (int **)malloc(n*sizeof(int*));
	A = (int *)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	
	for(i=0; i<n; i++)
		P[i] = (int*)malloc((A[i])*sizeof(int));
	printf("Nhap cac mang: ");
	for(i = 0; i<n; i++)
	{
		for(j=0; j<A[i]; j++)
			scanf("%d", &P[i][j]);
	}
	
	tongTungMang(P, A, n);
	printf("\n");
	mangCoNhieuSNT(P, A, n);
	
	return 0;
}
void mangCoNhieuSNT(int **P, int *A, int n)
{
	int i, vitri = 0, dem = demSoNguyenTo(P[0], A[0]);
	int check =0;
	for(i = 0; i<n; i++)
	{
		
		if(dem < demSoNguyenTo(P[i], A[i]))
		{
			check = 1;
			dem = demSoNguyenTo(P[i], A[i]);
			vitri = i;
		}
	}	
	if(check == 1)
		vitri = -1;	
	printf("Ket qua b : %d", vitri);
}
void tongTungMang(int **P, int *A, int n)
{
	int i, j, tong;
	printf("Ket qua a: ");
	for(i = 0; i<n; i++)
	{
		tong = 0;
		for(j=0; j<A[i]; j++)
		{
			tong += P[i][j];
		}
		printf("%d ", tong);
	}
}
int demSoNguyenTo(int *A, int n)
{
	int i, dem = 0;
	for(i=0; i<n; i++)
		if(laSoNguyenTo(A[i]) == 1)
			dem++;
	return dem;
}
int laSoNguyenTo(int x)
{
	int i;
	if(x<2)
		return 0;
	if(x==2)
		return 1;
	for(i=2; i<x; i++)
		if(x%i==0)
			return 0;
	return 1;
}

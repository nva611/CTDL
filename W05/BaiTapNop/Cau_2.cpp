#include <stdio.h>
#include <stdlib.h>
void nhapMang(int **A, int m, int n);
void tongDongThuI(int **A, int n, int i);
void hoanVi(int **A, int n);
int maxDongI(int **A, int n, int i);
void maxBeNhat(int **A, int m, int n);
void xuatMang(int **A, int m, int n);
int main()
{
	int **A, m, n, i;
	int j;
	printf("Nhap so hang: ");
	scanf("%d", &m);
	printf("Nhap so cot: ");
	scanf("%d", &n);
	
	A = (int**)malloc(m*sizeof(int*));
	for(i=0; i<m; i++)
		A[i] = (int*)malloc(n*sizeof(int));
		
	nhapMang(A, m, n);
	xuatMang(A, m, n);
	
	printf("Nhap dong can tinh tong: ");
	scanf("%d", &i);
	tongDongThuI(A, n, i);
	printf("\n");
	
	
	printf("Nhap dong can tim max: ");
	scanf("%d", &i);
	int maxI = maxDongI(A, n, i);
	printf("Max dong %d la %d\n", i, maxI);
	
	maxBeNhat(A, m, n);
	printf("\n");
	
	hoanVi(A, n);
	xuatMang(A, m, n);
}
void nhapMang(int **A, int m, int n)
{
	int i, j;
	printf("Nhap mang: ");	
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
void tongDongThuI(int **A, int n, int i)
{
	int j, tong = 0;
	for(j=0; j<n; j++)
		tong += A[i][j];
	printf("Tong dong thu %d la: %d", i, tong);
}
void hoanVi(int **A, int n)
{
	int i, j;
	printf("Nhap 2 dong hoan vi nhau: ");
	scanf("%d%d", &i, &j);
	int k, temp;
	for(k=0; k<n; k++)
	{
		temp = A[i][k];
		A[i][k] = A[j][k];
		A[j][k] = temp;
	}
}
int maxDongI(int **A, int n, int i)
{
	if(n==0)
		return -999;
	else if(n==1)
		return A[i][0];
	else
	{
		if(A[i][n-1] > maxDongI(A, n-1, i))
			return A[i][n-1];
		else
			return maxDongI(A, n-1, i);
	}
}
void maxBeNhat(int **A, int m, int n)
{
	int maxMin, maxI, i;
	maxMin = maxDongI(A, n, 0);
	for(i=1; i<m; i++)
	{
		maxI = maxDongI(A, n, i);
		if(maxMin>maxI)
			maxMin = maxI;
	}
	printf("Max be nhat la: %d", maxMin);
}
void xuatMang(int **A, int m, int n)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}

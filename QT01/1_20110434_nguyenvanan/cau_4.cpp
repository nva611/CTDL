#include <stdio.h>
#include <stdlib.h>

void nhap(int A[][4], int &i, int &j);
void demDoiMotKhacNhau(int A[][4]);
int doiMotKhacNhau(int A[][4], int k);
void hoanVi(int A[][4], int i, int j);
void xuat(int A[][4], int i, int j);

int main()
{
	int i, j, A[4][4];
	nhap(A, i, j);
	hoanVi(A, i, j);
	demDoiMotKhacNhau(A);
	return 0;
}
void nhap(int A[][4], int &i, int &j)
{
	int m, n;
	
	printf("Nhap i,j va mang : ");
	scanf("%d%d", &i, &j);
	
	for(m=0; m<4; m++)
		for(n=0; n<4; n++)
			scanf("%d", &A[m][n]);
}
void demDoiMotKhacNhau(int A[][4])
{
	int i, dem = 0;
	for(i=0; i<4; i++)
		if(doiMotKhacNhau(A, i) == 1)
			dem++;
	printf("Ket qua b : %d", dem);
}
int doiMotKhacNhau(int A[][4], int k)
{
	int i, j;
	for(i=0; i<4; i++)
		for(j=i+1; j<4; j++)
			if(A[k][i] == A[k][j])
				return 0;
	return 1;
}
void hoanVi(int A[][4], int i, int j)
{
	int temp, k;

	for(k=0; k<4; k++)
	{
		temp = A[i][k];
		A[i][k] = A[j][k];
		A[j][k] = temp;
	}
	printf("Ket qua a :\n");
	xuat(A, i, j);
}
void xuat(int A[][4], int i, int j)
{
	int m, n;
	for(m=0; m<4; m++)
	{	
		for(n=0; n<4; n++)
			printf("%d ", A[m][n]);
		printf("\n");
	}
}

#include <stdio.h>
#include <stdlib.h>
void soNTThuHai(int *A, int n);
void demSoNguyenTo(int *A, int n);
int laSoNguyenTo(int x);
int main()
{
	int i, n, *p;
	
	printf("Nhap n : ");
	scanf("%d", &n);
	
	p = (int *)malloc(n*sizeof(int));
	
	printf("Nhap n gia tri : ");
	for(i=0; i<n; i++)
		scanf("%d", &p[i]);
		
	demSoNguyenTo(p, n);
	soNTThuHai(p, n);
		
	return 0;
}
void soNTThuHai(int *A, int n)
{
	int i, dem = 0;
	for(i=0; i<n; i++)
	{
		if(laSoNguyenTo(A[i]) == 1)
			dem++;
		if(dem==2)
		{
			printf("Ket qua b : %d", i);
			return;
		}
	}
	if(i==n)
		printf("Ket qua b : -1");
}
void demSoNguyenTo(int *A, int n)
{
	int i, dem = 0;
	for(i=0; i<n; i++)
		if(laSoNguyenTo(A[i]) == 1)
			dem++;
	printf("Ket qua a : %d\n", dem);
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

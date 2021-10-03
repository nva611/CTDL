#include <stdio.h>
#include <stdlib.h>

void soNgToThuK(int *A, int n, int k);
void soNguyenToBeNhat(int *A, int n);
int laSoNguyenTo(int x);

int main()
{
	int i, n, k, *p;
	printf("Nhap n , k va n gia tri: ");
	scanf("%d%d", &n, &k);
	
	p = (int *)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
		scanf("%d", &p[i]);
	
	soNguyenToBeNhat(p, n);
	soNgToThuK(p, n, k);
	
	return 0;
}
void soNgToThuK(int *A, int n, int k)
{
	int i, dem = 0;
	for(i=0; i<n; i++)
	{
		if(laSoNguyenTo(A[i]) == 1)
			dem++;
		if(dem==k)
		{
			printf("Ket qua b : %d", i);
			return;
		}
	}
	printf("Ket qua b : -1");
}
void soNguyenToBeNhat(int *A, int n)
{
	int min = 999999, i;
	for(i=0; i<n; i++)
		if(laSoNguyenTo(A[i]) == 1 && A[i]<min)
			min = A[i];
	printf("Ket qua a : %d\n", min);
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

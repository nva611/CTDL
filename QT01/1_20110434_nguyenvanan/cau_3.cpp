#include <stdio.h>
#include <stdlib.h>
int laSoNguyenTo(int x);
int kiemTraNgToTang(int *A, int n);
int main()
{
	int i, n, *p, kq;
	
	printf("Nhap n, n gia tri: ");
	scanf("%d", &n);
	p = (int *)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
		scanf("%d", &p[i]);
		
	kq = kiemTraNgToTang(p, n);
	if(kq==1)
		printf("Ket qua : tang dan");
	else if(kq==0)
		printf("Ket qua : khong tang dan");
	else
		printf("Ket qua : khong co");
	return 0;
}
int kiemTraNgToTang(int *A, int n)
{
	int i;
	int check = -1;
	for(i=0; i<n; i++)
	{
		if(laSoNguyenTo(A[i])==1)
			if(A[i] >= check)
				check = A[i];
			else 
			{
				check = 0;
				return 0;
			}
	}
	if(check==-1)
		return -1;
	return 1;		
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

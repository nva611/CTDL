#include <stdio.h>
void sapXepSoLeInsertion1(int A[], int n) ;
void xuat(int A[], int n);
// 1. S?p x?p các s? l? theo chi?u tang d?n (v?n gi? nguyên v? trí các ph?n t?).
int main()
{
	int A[10] = {1,2,0,5,6,9,7,3,8,4};
	sapXepSoLeInsertion1(A, 10);
	xuat(A, 10);
	return 0;
}
void sapXepSoLeInsertion1(int A[], int n)  // viet thuan
{
	int i, j, t, nb = 0;
	int B[10];
	for(i=0; i<n; i++)
		if(A[i]%2==1)
			B[nb++] = i;
	for(i = 1; i<nb; i++)
	{
		j = i-1;
		t = A[B[i]];
		while(j>=0 && A[B[j]] > t)
		{
			A[B[j+1]] = A[B[j]];
			j--; 
		}
		A[B[j+1]] = t;
	}
}
void xuat(int A[], int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
}


#include <stdio.h>
void xuat(int A[], int n);
void sapXepLeTangInsertion1(int A[], int n);
void sapXepLeTangInsertion2(int A[], int n);
// 2. S?p x?p các s? l? theo chi?u tang d?n, các s? ch?n theo chi?u gi?m d?n (v?n gi? nguyên v? trí các ph?n t?).
int main(void )
{
	int A[10] = {2,0,4,1,6,9,8,3,7,5};
	sapXepLeTangInsertion1(A, 10);
//	sapXepLeTangInsertion2(A, 10);
	xuat(A, 10);
	return 0;
}
void sapXepLeTangInsertion2(int A[], int n)  // viet nghich
{
	int C[10], L[10];
	int i, j, t, nc = 0, nl = 0;
	
	for(i=0; i<n; i++)
		if(A[i]%2==0)
			C[nc++] = i;
		else
			L[nl++] = i;
	
	// xep chan giam
	for(i=nc-2; i>=0; i--)
	{
		j = i+1;
		t = A[C[i]];
		while(j<nc && A[C[j]]>t)
		{
			A[C[j-1]] = A[C[j]];
			j++;
		}
		A[C[j-1]] = t;
	}
	//xep le tang
	for(i=nl-2; i>=0; i--)
	{
		j = i+1;
		t = A[L[i]];
		while(j<nl && A[L[j]]<t)
		{
			A[L[j-1]] = A[L[j]];
			j++;
		}
		A[L[j-1]] = t;
	}
}
void sapXepLeTangInsertion1(int A[], int n) // viet thuan
{
	int C[10], L[10];
	int i, j, t, nc = 0, nl = 0;
	
	for(i=0; i<n; i++)
		if(A[i]%2==0)
			C[nc++] = i;
		else
			L[nl++] = i;
	
	// sap sep chan giam
	for(i=1; i<nc; i++)
	{
		j = i-1;
		t = A[C[i]];
		while(j>=0 && A[C[j]] < t)
		{
			A[C[j+1]] = A[C[j]];
			j--;
		}
		A[C[j+1]] = t;
	}
	
	// sap xep le tang
	for(i=1; i<nl; i++)
	{
		j = i-1;
		t = A[L[i]];
		while(j>=0 && A[L[j]] > t)
		{
			A[L[j+1]] = A[L[j]];
			j--;
		}
		A[L[j+1]] = t;
	}
}
void xuat(int A[], int n)
{
	int i;
	for(i =0; i<n; i++)
		printf("%d ", A[i]);
}

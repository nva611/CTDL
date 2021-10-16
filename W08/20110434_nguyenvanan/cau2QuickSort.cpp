#include <stdio.h>
void quickSort(int A[], int l, int r);
int partition(int A[], int l, int r);
void xuat(int A[], int n);
void swap(int &a, int &b);
int soChan(int x);
int main()
{
	int A[10] = {2,0,1,5,3,9,4,8,6,7};
	quickSort(A, 0, 9);
	xuat(A, 10);
	return 0;
}
void quickSort(int A[], int l, int r)
{
	int p;
	if(l<r)
	{
		p = partition(A, l, r);
		quickSort(A, l, p-1);
		quickSort(A, p+1, r);
	}
}
int partition(int A[], int l, int r)
{
	int j, x = A[r], i = l-1;
	for(j = l; j<=r-1; j++)
	{
		if(soChan(A[j]) == soChan(x))
		{
			if(A[j]<=x)
			{
				i++;
				swap(A[i], A[j]);
			}
		}
		else
		{
			if(soChan(x)==0)
			{
				i++;
				swap(A[i], A[j]);
			}
		}
	}
	swap(A[i+1], A[r]);
	return i+1;
}
int soChan(int x)
{
	if(x%2==0)
		return 1;
	return 0;
}
void xuat(int A[], int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

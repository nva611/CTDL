#include <stdio.h>
void swap(int &a, int &b);
void maxHeap(int A[], int i, int n);
void xepTangDanHeapsort(int A[], int n);
void xuat(int A[], int n);
int soChan(int x);
int main()
{
	int A[10] = {2,0,1,5,3,9,4,8,6,7};
	xepTangDanHeapsort(A, 10);
	xuat(A, 10);
	return 0;
}
void xepTangDanHeapsort(int A[], int n)
{
	int i;
	int heap_size = n;
	for(i=n/2-1; i>=0; i--)
		maxHeap(A, i, n);
	for(i=n-1; i>=1; i--)
	{
		swap(A[0], A[i]);
		heap_size--;
		maxHeap(A, 0, heap_size);
	}
}
void maxHeap(int A[], int i, int n)
{
	int l, r, k;
	l = 2*i+1;
	r = 2*i+2;
	
	if(soChan(A[l]) == soChan(A[i]))
	{
		if((l<n) && A[l]>A[i])
			k = l;
		else
			k = i;
		
	}
	else
	{
		if((l<n) && soChan(A[l])==0)
			k = l;
		else
			k = i;
	}
	if(soChan(A[r]) == soChan(A[k]))
	{
		if(r<n && A[r]>A[k])
			k = r;
	}
	else
		if(r<n && soChan(A[r])==0)
			k = r;
	if(k!=i)
	{
		swap(A[k], A[i]);
		maxHeap(A, k, n);
	}
}
int soChan(int x)
{
	if(x%2==0)
		return 1;
	return 0;
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void xuat(int A[], int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
}

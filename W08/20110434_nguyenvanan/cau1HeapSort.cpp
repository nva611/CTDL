#include <stdio.h>
void swap(int &a, int &b);
void maxHeap(int A[], int i, int n);
void xepGiamDanHeapsort(int A[], int n);
void xuat(int A[], int n);
int main()
{
	int A[10] = {2,0,1,5,3,9,4,8,6,7};
	xepGiamDanHeapsort(A, 10);
	xuat(A, 10);
	return 0;
}
void xepGiamDanHeapsort(int A[], int n)
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
	if((l<n) && A[l]<A[i])
		k = l;
	else
		k = i;
	if(r<n && A[r]<A[k])
		k = r;
	if(k!=i)
	{
		swap(A[k], A[i]);
		maxHeap(A, k, n);
	}
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

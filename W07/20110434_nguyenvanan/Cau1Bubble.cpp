#include <stdio.h>
void cau1Bubble(int A[], int n);
void xuat(int A[], int n);
void swap(int &a, int &b);
int main()
{
	FILE *fptr;
	int A[100], n, i;
	
	fptr = fopen("D:\\mang.txt", "r");
	if(fptr==NULL)
	{
		printf("FILE khong ton tai");
		return 0;
	}
	fscanf(fptr, "%d", &n);
	for(i=0; i<n; i++)
		fscanf(fptr, "%d", &A[i]);
	
	cau1Bubble(A, n);
	
	fclose(fptr);
	return 0;
}
void cau1Bubble(int A[], int n)
{
	int i, j;
	for(i=0; i<n-1; i++)
	{
		for(j=n-1; j>i; j--)
		{
			if(A[j]>A[j-1])
			{
				swap(A[j], A[j-1]);
			//	xuat(A, n);
			}
		}
		xuat(A, n);
	}
}
void xuat(int A[], int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
	printf("\n");
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

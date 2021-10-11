#include <stdio.h>
void cau1Bubble(int A[], int n);
void xuat(int A[], int n);
void swap(int &a, int &b);
void cau2Bubble(int A[], int n);
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
	
	cau2Bubble(A, n);
	
	fclose(fptr);
	return 0;
}
void cau2Bubble(int A[], int n)
{
	int i, j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(A[j]*A[j+1]%2==0)
				if(A[j]%2==1 && A[j+1]%2==0)
					swap(A[j], A[j+1]);
			else if(A[j]>A[j+1])
				swap(A[j], A[j+1]);
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

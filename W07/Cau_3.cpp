#include <stdio.h>
void cau2Insertion(int A[], int n);
void xuat(int A[], int n);
void cau3Insertion(int A[], int n);
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
	
	printf("Mang gom: ");
	xuat(A, n);
	
	
	printf("CAU 2: \n");
	cau2Insertion(A, n);
	fclose(fptr);
	
	
	fptr = fopen("D:\\mang.txt", "r");
	if(fptr==NULL)
	{
		printf("FILE khong ton tai");
		return 0;
	}
	fscanf(fptr, "%d", &n);
	for(i=0; i<n; i++)
		fscanf(fptr, "%d", &A[i]);
		
	printf("CAU 3: \n");
	cau3Insertion(A, n);
	fclose(fptr);
	
	return 0;
}
void cau3Insertion(int A[], int n)
{
	int B[n];
	int i, k, t, nb = 0;
	for(i=0; i<n; i++)
		if(A[i]%2==0)
			B[nb++] = i;
	
	
	for(i=1; i<nb; i++)
	{
		k = i;
		t = A[B[k]];
		while(k>=0 && t < A[B[k-1]])
		{
			A[B[k]] = A[B[k-1]];
			k--;
		}
		A[B[k]]  = t;
		xuat(A, n);
	}
}
void cau2Insertion(int A[], int n)
{
	int i, j, t;
	for(i=n-2; i>=0; i--)
	{
		t = A[i];
		j = i+1;
		while(j<n && t < A[j])
		{
			A[j-1] = A[j];
			j++; 
		}
		A[j-1] = t;
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

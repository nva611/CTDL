#include <stdio.h>
void xepTangDanBubble(int A[], int n);
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
	
	xepTangDanBubble(A, n);
	
	return 0;
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

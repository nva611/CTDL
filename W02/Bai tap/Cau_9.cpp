#include <stdio.h>

int main()
{
	int n, i, j;
	int M[100][100];
	int tongDong = 0, tongCot = 0;
	int min1, min2;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("Nhap mang: ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d", &M[i][j]);
	}
	
	// tong tung dong
	
	for(i=0; i<n; i++)
	{
		tongDong = 0;
		for(j=0; j<n; j++)
			tongDong += M[i][j];
		printf("Tong dong %d = %d\n", i, tongDong);
	}
	
	for(j=0; j<n; j++)
	{
		tongCot = 0;
		for(i=0; i<n; i++)
			tongCot += M[i][j];
		printf("Tong cot %d = %d\n", j, tongCot);
	}
	
	//cau c
	min1 = M[0][0];
	for(i=0; i<n; i++)
		if(M[i][i]>min1)
			min1 = M[i][i];
	printf("Gia tri min tren duong cheo chinh la: %d\n", min1);
	
	//cau d
	min2 = M[0][1];
	for(i=0; i<n; i++)
		if(M[i][i+1]>min2)
			min2 = M[i][i];
	printf("Gia tri min tren duong cheo tren chinh la: %d", min2);
	return 0;
}

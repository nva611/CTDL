#include <stdio.h>
#include <stdlib.h>
struct CON_TRO
{
	int *x;
	int **y;
};

void nhapMang(int *&x);
void tinhTong(int *x);
void ghiFile(FILE *fptr, int *x, int *y, int *z);
void docFile(FILE *fptr, int *x, int *y, int *z);

int main()
{
	int **p;
	CON_TRO a1, a2, a3;
	
	FILE *fptr;
	fptr = fopen("D:\\bt2.txt", "w");
	
	if(fptr==NULL)
	{
		printf("Error");
		return 0;
	}
	
	p = &(a1.x);
	a1.y = &(a2.x);
	a2.y = &(a3.x);
	a3.y = NULL;

	nhapMang(a1.x);
	nhapMang(a2.x);
	nhapMang(a3.x);
	
	ghiFile(fptr, a1.x, a2.x, a3.x);
	
	tinhTong(a1.x);
	tinhTong(a2.x);
	tinhTong(a3.x);
	
	fclose(fptr);
	
	
	fptr = fopen("D:\\bt2.txt", "r");
	
	docFile(fptr, a1.x, a2.x, a3.x);
		
	fclose(fptr);
	return 0;
}
void docFile(FILE *fptr, int *x, int *y, int *z)
{
	int i;
	for(i=0; i<4; i++)
		fscanf(fptr, "%d", &x[i]);
		
	for(i=0; i<4; i++)
		fscanf(fptr, "%d ",&y[i]);
		
	for(i=0; i<4; i++)
		fscanf(fptr, "%d ", &z[i]);
}
void ghiFile(FILE *fptr, int *x, int *y, int *z)
{
	int i;
	
	for(i=0; i<4; i++)
		fprintf(fptr, "%d ", x[i]);
		
	for(i=0; i<4; i++)
		fprintf(fptr, "%d ", y[i]);
		
	for(i=0; i<4; i++)
		fprintf(fptr, "%d ", z[i]);
}
void nhapMang(int *&x)
{
	int i;
	x = (int*)malloc(4*sizeof(int));
	printf("Nhap gia tri: ");
	for(i=0; i<4; i++)
		scanf("%d", &x[i]);
}
void tinhTong(int *x)
{
	int i, tong = 0;
	for(i=0; i<4; i++)
		tong += x[i];
	printf("Tong = %d\n", tong);
}

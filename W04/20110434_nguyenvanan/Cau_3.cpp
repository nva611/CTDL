#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **p, i, j;
	int tong;
	
	p = (int**)malloc(4*sizeof(int*));
	
	p[0] = (int*)malloc(4*sizeof(int));
	
	
	p[0][0] = 3;
	p[0][1] = 5;
	p[0][2] = 4;
	p[0][3] = 3;
	
	p[1] = (int*)malloc(5*sizeof(int));
	p[2] = (int*)malloc(4*sizeof(int));
	p[3] = (int*)malloc(3*sizeof(int));
	
	for(i=1; i<=3; i++)
	{
		printf("Nhap mang %d: ", i);
		for(j=0; j<p[0][i]; j++)
			scanf("%d", &p[i][j]);
	}
	for(i=1; i<=3; i++)
	{
		tong = 0;
		for(j=0; j<p[0][i]; j++)
			tong += p[i][j];
		printf("Tong mang %d: %d\n", i, tong);
	}
	
	for(i=0; i<=3; i++)
		free(p[i]);
	free(p);
	return 0;
}

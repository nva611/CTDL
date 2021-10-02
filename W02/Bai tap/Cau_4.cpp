#include <stdio.h>

int main()
{
	int n, i;
	int f1 = 1, f2 = 2;
	int f3;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n==1)
		f3 = f1;
	else 
		if(n==2)
			f3 = f2;
		else
			for(i = 3; i <= n; i++)
			{
				f3 = f1 + f2;
				f1 = f2;
				f2 = f3;
			}
	printf("gia tri thu %d la %d", n, f3);
	
	return 0;
}

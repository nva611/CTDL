#include <stdio.h>

int main()
{
	int n, i=0;
	int M[8];
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	while(i<8)
	{
		M[i] = n%2;
		n = n/2;
		i++;
	}
	
	printf("%d chuyen sang nhi phan la: ", n);
	for(i = 7; i>=0; i--)
		printf("%d", M[i]);
	
	return 0;
}

#include <stdio.h>

int main()
{
	int n, i, sum = 0;
	int M[100];
	
	scanf("%d", &n);
	
	printf("Nhap mang: ");
	for(i=0; i<n; i++)
		scanf("%d", &M[i]);
		
	for(i = 0; i < n; i++)
		if(M[i]%2==0)
			sum += M[i];
			
	printf("KQ sum = %d", sum);
}

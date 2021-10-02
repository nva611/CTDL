#include <stdio.h>

int main()
{
	int n, i, max = -1;
	int M[100];
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("Nhap mang: ");
	for(i=0; i<n; i++)
		scanf("%d", &M[i]);
		
	for(i=0; i<n; i++)
		if(M[i]%2==0 && max<=M[i])
			max = M[i];
	
	if(max>0)
		printf("Max chan = %d", max);
	else
		printf("Mang khong co so chan");
	
	return 0;
}

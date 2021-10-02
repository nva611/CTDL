#include <stdio.h>

int main()
{
	int n, i;
	int sum = 0;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	
	for(i=0; i<=n; i++)
		if(i%2==1)
			sum += i;
		else
			sum -= i;
	
	printf("S(%d) = %d", n, sum);
	
	return 0;
}

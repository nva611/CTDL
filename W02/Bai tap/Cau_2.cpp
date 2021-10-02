#include <stdio.h>

int main()
{
	int n, i;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
		if(i*i == n)
			break;
	if(i<=n)
		printf("%d la so chinh phuong", n);
	else
		printf("%d khong la so chinh phuong", n);
}

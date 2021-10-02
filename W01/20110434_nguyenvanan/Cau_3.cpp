#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Nhap 3 so nguyen a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>=b)
	{
		if (a>=c)
			printf("So lon nhat la: %d",a);
		else
			printf("So lon nhat la: %d",c);
	}
	else
	{
		if(b>=c)
			printf("So lon nhat la: %d",b);
		else
			printf("So lon nhat la: %d",c);
	}
		
	return 0;
}

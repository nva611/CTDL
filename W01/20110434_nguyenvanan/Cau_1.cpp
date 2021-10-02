#include <stdio.h>

int main()
{
	int n;
	
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	
	if( (n%5==0 && n%6!=0) || (n%6==0 && n%5!=0) )
		printf("%d chi chia het cho 5 hoac 6\n", n);
	if(n%5==0 && n%6==0)
		printf("%d chia het cho 5 va 6\n", n);
	if(n%5!=0 && n%6!=0)
		printf("%d khong chia het cho 5 hoac 6\n", n);
	
	return 0;
}

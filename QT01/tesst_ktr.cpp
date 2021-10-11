#include <stdio.h>

int main()
{
	int n = 260, *p = &n;
	printf("n = %d\n", n);
	
	char *pp = (char *) p;
	*pp = 10;
	printf("n = %d\n", n);
	
	int a = 0;
	char x = '2';
	printf("%d", x);
	return 0;
}

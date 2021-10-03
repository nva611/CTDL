#include <stdio.h>
int laSoNguyenTo(int x);
int laSoChinhPhuong(int x);
int laNamNhuan(int x);
// so nguyen to
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d %d %d", laSoNguyenTo(n), laSoChinhPhuong(n), laNamNhuan(n));
	return 0;
}
int laNamNhuan(int x)
{
	if (x % 400 == 0) 
    	return 1; 
    	
    if (x % 4 == 0 && x % 100 != 0) 
        return 1;
        
    return 0; 
}
int laSoChinhPhuong(int x)
{
	int i;
	if(x<1)
		return 0;
	for(i=1; i<=x; i++)
		if(i*i == x)
			return 1;
	return 0;
}
int laSoNguyenTo(int x)
{
	int i;
	if(x<2)
		return 0;
	if(x==2)
		return 1;
	for(i=2; i<x; i++)
		if(x%i==0)
			return 0;
	return 1;
}

#include <stdio.h>

struct PHAN_SO
{
	int tu;
	int mau;
};

int boiChungNhoNhat(int a, int b);
int uocChungLonNhat(int a, int b);
void soSanhHaiPhanSo(PHAN_SO a, PHAN_SO b);
void quyDong(PHAN_SO a, PHAN_SO b);
void rutGon(PHAN_SO &a);
void tinh(PHAN_SO a, PHAN_SO b);
void nhap(PHAN_SO &a);

int main()
{
	PHAN_SO x, y;
	nhap(x);
	nhap(y);
	tinh(x, y);
	rutGon(x);
	rutGon(y);
	quyDong(x, y);
	soSanhHaiPhanSo(x, y);
	return 0;
}
void nhap(PHAN_SO &a)
{
	printf("Nhap phan so: ");
	scanf("%d%d", &a.tu, &a.mau);
}
void tinh(PHAN_SO a, PHAN_SO b)
{
	PHAN_SO tong, hieu, tich, thuong;
	
	tong.tu = a.tu*b.mau + b.tu*a.mau;
	tong.mau = a.mau*b.mau;
	
	hieu.tu = a.tu*b.mau - b.tu*a.mau;
	hieu.mau = a.mau*b.mau;
	
	tich.tu = a.tu*b.tu;
	tich.mau = a.mau*b.mau;
	
	thuong.tu = a.tu*b.mau;
	thuong.mau = a.mau*b.tu;
	
	printf("Tong: %d/%d\n", tong.tu, tong.mau);
	printf("Hieu: %d/%d\n", hieu.tu, hieu.mau);
	printf("Tich: %d/%d\n", tich.tu, tich.mau);
	printf("Thuong: %d/%d\n", thuong.tu, thuong.mau);
}
void rutGon(PHAN_SO &a)
{
	int ucln = uocChungLonNhat(a.tu, a.mau);
	a.tu = a.tu/ucln;
	a.mau = a.mau/ucln;
	
	printf("Dang rut gon: %d/%d\n", a.tu, a.mau);
}
void quyDong(PHAN_SO a, PHAN_SO b)
{
	int bcnn = boiChungNhoNhat(a.mau, b.mau);
	int thuaSoPhuA = bcnn/a.mau, thuaSoPhuB = bcnn/b.mau;
	
	a.tu = a.tu*thuaSoPhuA;
	a.mau = a.mau*thuaSoPhuA;
	
	b.tu = b.tu*thuaSoPhuB;
	b.mau = b.mau*thuaSoPhuB;
	
	printf("Quy dong: %d/%d va %d/%d\n", a.tu, a.mau, b.tu, b.mau);
}
void soSanhHaiPhanSo(PHAN_SO a, PHAN_SO b)
{
	double giaTriA = (double)a.tu/a.mau;
	double giaTriB = (double)b.tu/b.mau;
	
	if(giaTriA==giaTriB)
		printf("So sanh: %d/%d = %d/%d\n", a.tu, a.mau, b.tu, b.mau);
	else if(giaTriA>giaTriB)
		printf("So sanh: %d/%d > %d/%d\n", a.tu, a.mau, b.tu, b.mau);
	else
		printf("So sanh: %d/%d < %d/%d\n", a.tu, a.mau, b.tu, b.mau);
		
}
int uocChungLonNhat(int a, int b)
{
	if(a==0 || b==0)
		return a+b;
	while(a!=b)
	{
		if(a>b)
			a = a-b;
		else
			b = b - a;
	}
	return a;
}
int boiChungNhoNhat(int a, int b)
{
	return (a*b)/uocChungLonNhat(a, b);
}



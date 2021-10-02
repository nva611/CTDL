#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, kq1, kq2, denta;
	
	printf("Nhap he so a, b, c: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
				printf("Phuong trinh vo so nghiem");
			else
				printf("Phuong trinh vo nghiem");
		}
		else
		{
			kq1 = -c/b;
			printf("Nghiem phuong trinh la: %lf", kq1);
		}
	}
	else
	{
		denta = b*b - 4*a*c;
		if(denta<0)
			printf("Phuong trinh vo nghiem");
		else if(denta==0)
		{
			kq1 = (-b)/(2*a);
			printf("Phuong trinh co nghiem kep: x = %lf", kq1);
		}
		else
		{
			kq1 = (-b+sqrt(denta))/(2*a);
			kq2 = (-b-sqrt(denta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet: x1 = %lf, x2 = %lf", kq1, kq2);
		}
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct LIST
{
	int data;
	LIST *pointer;
};

void Menu();
void XuatDS(LIST *L);
void KhoiTao(LIST **L);
int ThemDauDS(LIST **L, int x);
int XoaPTu(LIST **L, int x);
int TimKiemPTu(LIST *L, int x);
void ghiDSVaoFile(FILE *fptr, LIST *L);


int main()
{
	Menu();
	return 0;
}
void Menu()
{
	int luaChon, x;
	LIST *L;
	FILE *fptr;
	KhoiTao(&L);
	while(true)
	{
		printf("1. Xuat danh sach.\n");
		printf("2. Them mot phan tu.\n");
		printf("3. Tim kiem mot phan tu.\n");
		printf("4. Xoa mot phan tu.\n");
		printf("5. Ghi danh sach vao file.\n");
		printf("6. Doc file vao danh sach.\n");
		printf("7. Ket thuc.\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &luaChon);
		switch(luaChon)
		{
			case 1: 
				XuatDS(L);
				break;
			case 2:
				printf("Nhap gia tri them vao: ");
				scanf("%d", &x);
				if(ThemDauDS(&L, x) == 1)
					printf("Them thanh cong\n");
				else
					printf("Them that bai\n");
				break;
			case 3:
				printf("Nhap gia tri can tim kiem: ");
				scanf("%d", &x);
				if(TimKiemPTu(L, x) == 1)
					printf("Tim thay\n");
				else
					printf("Khong tim thay\n");
				break;
			case 4:
				printf("Nhap gia tri can xoa: ");
				scanf("%d", &x);
				if(XoaPTu(&L, x) == 1)
					printf("Xoa thanh cong\n");
				else
					printf("Khong co gia tri de xoa\n");
				break;
			case 5:
				ghiDSVaoFile(fptr, L);
				break;
			case 6:
				printf("Em chua lam kip\n");
			case 7:
				return;
		}
		printf("-----------------------------------------------------------\n");
	}
}
void ghiDSVaoFile(FILE *fptr, LIST *L)
{
	fptr = fopen("D:\\bt.bin", "wb");
	
	if(L==NULL)
	{
		printf("DANH SACH TRONG KHONG CO GI DE GHI\n");
		return;
	}
	LIST *p;
	p = L;
	while(p!=NULL)
	{
		fprintf(fptr, "%d ", p->data);
		p = p->pointer;
	}
	fprintf(fptr, "\n");
	printf("Ghi thanh cong\n");
	fclose(fptr);
}

void XuatDS(LIST *L)
{
	if(L==NULL)
	{
		printf("DANH SACH TRONG\n");
		return;
	}
	LIST *p;
	p = L;
	printf("Cac phan tu trong DS: ");
	while(p!=NULL)
	{
		printf("%d ", p->data);
		p = p->pointer;
	}
	printf("\n");
}
void KhoiTao(LIST **L)
{
	*L = NULL;
}
int ThemDauDS(LIST **L, int x)
{
	LIST *p;
	p = (LIST*)malloc(sizeof(LIST));
	if(p==NULL)
		return 0;
	p->data = x;
	p->pointer = (*L);
	*L = p;
	return 1;
}
int XoaPTu(LIST **L, int x)
{
	LIST *p, *q;
	p = *L;
	if((*L)->data==x)
	{
		*L = p->pointer;
		free(p);
		return 1;
	}
	p = (*L)->pointer;
	q = *L;
	while(p!=NULL)
	{
		
		if(p->data==x)
		{
			q->pointer = p->pointer;
			free(p);
			return 1;
		}
		q = p;
		p = p->pointer;
	}	
	return 0;
}
int TimKiemPTu(LIST *L, int x)
{
	LIST *p;
	p = L;
	while(p!=NULL)
	{
		if(p->data==x)
			return 1;
		p = p->pointer;
	}
	return 0;
}


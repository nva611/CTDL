#include <stdio.h>
#include <stdlib.h>

struct BST
{
	int data;
	BST *left, *right, *parent;
};

void initBST(BST *&Root);
void duyetThuTuGiua(BST *x);
void timKiemPhanTu(BST *T, int n);
BST *treeSearch(BST *x, int n);
void treeInsert(BST **T, int n);
void ghiFile(BST *x, FILE *fptr);

int main()
{
	BST *T;
	int luaChon, a;
	FILE *fptr;
	while(1)
	{
		printf("\n=============== MENU ===============\n");
		printf("1. Khoi tao BST.\n");
		printf("2. Them 1 phan tu.\n");
		printf("3. Tim kiem mot phan tu.\n");
		printf("4. Xoa 1 phan tu.\n");
		printf("5. Duyet theo thu tu giua.\n");
		printf("6. Ghi vao file.\n");
		printf("7. Doc tu file.\n");
		printf("8. Ket thuc.\n");
		printf("Nhap lua chon: ");
		scanf("%d", &luaChon);
		
		switch(luaChon)
		{
			case 1:
				initBST(T);
				printf("Khoi tao thanh cong\n");
				break;
			case 2:
				printf("Nhap gia tri cua phan tu can them: ");
				scanf("%d", &a);
				treeInsert(&T, a);
				break;
			case 3:
				if(T == NULL)
				{
					printf("Danh sach trong\n");
					break;
				}
				else
				{
					printf("Nhap gia tri cua phan tu can tim kiem: ");
					scanf("%d", &a);
					timKiemPhanTu(T, a);
				}
				break;
			case 4:
				printf("Chua hoc\n");
				break;
			case 5:
				if(T == NULL)
				{
					printf("Danh sach trong\n");
					break;
				}
				else duyetThuTuGiua(T);
				break;
			case 6:
				fptr = fopen("D:\\BST.bin", "wb");
				ghiFile(T, fptr);
				printf("Ghi thanh cong\n");
				fclose(fptr);
				break;
			case 7:
				printf("con it thoi gian nen em lam khong kip\n");
				break;
			case 8:
				printf("KET THUC\n");
				return 1;
			default:
				printf("Nhap sai lua chon, nhap lai\n");
				break;
		}
		printf("=============================================\n");
	}
	return 1;
}
void initBST(BST *&Root)
{
	Root = NULL;
}
void treeInsert(BST **T, int n)
{
	
	BST *z, *y, *x, *trung;
	z = (BST*)malloc(sizeof(BST));
	if(z==NULL)
	{
		printf("KHONG DU BO NHO\n");
		return;
	}
	
	trung = treeSearch(*T, n);
	
	if(*T != NULL && trung!=NULL && trung->data == n)
	{
		printf("Trung data\n");
		return;
	}
	
	z->data = n;
	z->left = NULL;
	z->right = NULL;
	y = NULL;
	x = *T;
	while(x!=NULL)
	{
		y = x;
		if(z->data<x->data)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;
	if(y==NULL)
		*T = z;
	else if(z->data<y->data)
		y->left = z;
	else
		y->right = z;
	printf("Them thanh cong\n");
}

BST *treeSearch(BST *x, int n)
{
	while(x!=NULL && n!=x->data)
	{
		if(n<x->data)
			x = x->left;
		else
			x = x->right;
	}
	return x;
}
void timKiemPhanTu(BST *T, int n)
{
	BST *x = treeSearch(T, n);
	if(x!=NULL)
		printf("Tim thay\n");
	else
		printf("Khong tim thay\n");
}
void ghiFile(BST *x, FILE *fptr)
{
	if (x != NULL) 
	{
		ghiFile(x->left, fptr);
		fprintf(fptr,"%d\n", x->data);
		ghiFile(x->right, fptr);
	}
}
void duyetThuTuGiua(BST *x)
{
	if (x != NULL) 
	{
		duyetThuTuGiua(x->left);
		printf("%d\n", x->data);
		duyetThuTuGiua(x->right);
	}
}


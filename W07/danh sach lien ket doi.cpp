#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node *pPrev;
	Node *pNext;
};
typedef struct Node NODE;

struct List
{
	NODE *pHead;
	NODE *pTail;
};
typedef struct List LIST;

void output(LIST l);
void input(LIST &l);
void addTail(LIST &l, NODE *p);
void addHead(LIST &l, NODE *p);
NODE* getNode(int x);
void init(LIST &l);

int main()
{
	LIST l;
	init(l);
	input(l);
	output(l);
	return 0;
}
void output(LIST l)
{
	NODE *p = l.pHead;
	
	printf("DUYET TU DAU DEN DUOI\n");
	while(p!=NULL)
	{
		printf("%d ", p->data);
		p = p->pNext;
	} 
	
	printf("\n");
	p = l.pTail;
	printf("DUYET TU DUOI DEN DAU\n");
	while(p!=NULL)
	{
		printf("%d ", p->data);
		p = p->pPrev;
	} 
}
void input(LIST &l)
{
	int n, x, i;
	printf("Nhap so luong NODE: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Nhap gia tri node: ");
		scanf("%d", &x);
		NODE *p = getNode(x);
	//	addHead(l, p);
		addTail(l, p);
	}
}
void addTail(LIST &l, NODE *p)
{
	if(l.pHead == NULL)
		l.pHead = l.pTail = p;
	else
	{
		l.pTail->pNext = p;
		p->pPrev = l.pTail;
		l.pTail = p;
	}
}
void addHead(LIST &l, NODE *p)
{
	if(l.pHead == NULL)
		l.pHead = l.pTail = p;
	else
	{
		p->pNext = l.pHead;
		l.pHead->pPrev = p;
		l.pHead = p;
	}
}
NODE* getNode(int x)
{
	NODE* p = (NODE*)malloc(sizeof(NODE));
	if(p==NULL)
	{
		printf("KHONG DU BO NHO\n");
		return NULL;
	}
	p->data = x;
	p->pNext = p->pPrev = NULL;
	return p;	
}
void init(LIST &l)
{
	l.pHead = l.pTail = NULL;
}

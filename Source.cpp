#include<iostream>
using namespace std;
struct node
{
	int data;
	node* pNext;
};
struct list
{
	node* pHead;
	node* pTal;
};
void CreateList(list& l)
{
	l.pHead = NULL;
	l.pTal = NULL;
}
node* GetNode(int n)
{
	node* p = new node;
	if (p == NULL)
		exit(-1);
	p->data = n;
	p->pNext = NULL;
	return p;
}
void GetList(list& l, node* p)
{
	if (l.pHead == NULL)
	{
		l.pHead = p;
		l.pTal = l.pHead;
	}
	else
	{
		l.pTal->pNext = p;
		l.pTal = p;
	}
}
void nhap(list& l)
{
	int n;
	while(1)
	{
		cin >> n;
		if (n == 0)
			break;
		node* p = GetNode(n);
		GetList(l, p);
	}
}
void xuat(list l)
{
	node* p = l.pHead;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->pNext;
	}
}
int main()
{
	list l;
	CreateList(l);
	nhap(l);
	xuat(l);

	return 0;
}
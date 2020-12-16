#ifndef __HEAD_H__
#define __HEAD_H__

typedef int ElemType;
typedef struct node
{
	ElemType data;
	struct node *next;

}Node;
Node* del_linked(Node *h);
Node* rank_linked(Node *h);
Node* creat_linked1(Node *h);
Node* inversion_linked(Node *h);
Node* creat_linked2(Node *h);
Node* increase_linked(Node *h);
int print_linked(Node *p);
int inversion(int x);
#endif

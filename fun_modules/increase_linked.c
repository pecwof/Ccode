
#include <stdlib.h>
#include <stdio.h>
#include "Head.h"

Node *increase_linked(Node *h)
{
	ElemType t;
	while (1)
	{	scanf("%d",&t);
		if (t == 0)
		{
			printf("Input Over\n");
			break;
		
		}
		Node *pnew = malloc(sizeof(Node *));
		pnew->data = t;
		pnew->next = h;
		h = pnew;
	
	}
	return h;


}

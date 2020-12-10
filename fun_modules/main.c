#include <stdlib.h>
#include <stdio.h>
#include "Head.h"

/*Node* linked(Node *h)
{
	ElemType t;
	while (1)
	{
		scanf("%d",&t);
		if (t == 0)
		{ 
			printf("INPUT OVER\n");
			break;
		}
		Node *pnew = malloc(sizeof(Node *));
		pnew->data = t;
		pnew->next = NULL;
		if (h == NULL)
		    h = pnew;
		else
		{	 
		         pnew->next = h;
	        	 h = pnew;
		}
	}
	return h;
}*/
int main ()
{
	Node *p = NULL;
	p = creat_linked(p);
	p = del_linked(p);
        rank_linked(p);
	print_linked(p);

}

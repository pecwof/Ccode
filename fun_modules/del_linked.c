
#include <stdlib.h>
#include <stdio.h>
#include "Head.h"


Node *del_linked(Node *h)
{
	ElemType t;
	Node *p = h;

	Node *H = h;
	scanf("%d",&t);
	while (1)
	{
	    if (H->data == t)
	    {
		h = h->next;
		free(p);
		return H;
            }
	    p = h;
	    h = h->next;
	    if(h == NULL)
	    {
		printf("no this number in this linked\n");	
		return H;
	    }
	    else if (h->data == t)
		{
			p->next = h->next;
			free(h);
			return H;
		
		
		}
	    
	
	}

}

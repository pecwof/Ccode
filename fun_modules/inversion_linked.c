#include <stdlib.h>
#include <stdio.h>
#include "Head.h"
Node* inversion_linked(Node *h)
{	
	Node* p1 = h;
	Node* p3 = h;
	h = h->next;
	Node* p2 = h;
	while(h->next)
	{
		h = h->next;
		p2->next = p1;
		p1 = p2;
		p2 = h;

	
	}
	p3->next = NULL;
	p2->next = p1;
	return p2;


		


}

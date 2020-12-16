//排序链表(以交换元素的方法)

#include <stdlib.h>
#include <stdio.h>
#include "Head.h"
Node* rank_linked(Node *h)
{
	Node *Head = h;
	while (h)
	{	
		if (h->next != NULL &&h->data < h->next->data)
		{
			int t;
			t = h->data;
			h->data = h->next->data;
			h->next->data = t;
			h = Head;
		}
		else 
		    h = h->next;
	
	}
	return Head;
}


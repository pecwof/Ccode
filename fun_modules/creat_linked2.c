
#include <stdlib.h>
#include <stdio.h>
#include "Head.h"
Node* creat_linked2(Node *h)
{
	ElemType t;
	Node *p;
	printf("*******************************\n");
	while (1)
	{
		scanf("%d",&t);
	    	//t = inversion(t);
		if (t == 0)
		{ 
	    		printf("*******************************\n");
			printf("INPUT OVER\n");
		    	printf("*******************************\n");
			break;
		}
		Node *pnew = malloc(sizeof(Node *));
		pnew->data = t;
		pnew->next = NULL;
		if (h == NULL)
		{
		    h = pnew;
		    p =h;
		
		}
		else
		{	 	 
		         p->next = pnew;
	        	 p = pnew;
		}
	}

	return h;
}

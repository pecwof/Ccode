
#include <stdlib.h>
#include <stdio.h>
#include "Head.h"
Node* creat_linked(Node *h)
{
	ElemType t;
	printf("*******************************\n");
	while (1)
	{
		scanf("%d",&t);
	    	t = inversion(t);
		printf("%d",t);
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
		    h = pnew;
		else
		{	 
		         pnew->next = h;
	        	 h = pnew;
		}
	}

	return h;
}

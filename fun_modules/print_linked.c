#include <stdlib.h>
#include <stdio.h>
#include "Head.h"

int print_linked(Node *p)
{
	if (p == NULL)
	{
	    printf("NULL");
	    return 0;
	}
	while (1)
	{
	    	if (p == NULL) //p不在节点里面了

		{
			printf("\n*******************************\n");
			printf("OUTPUT OVER\n");
			printf("*******************************\n");
			break;
		
		}
		printf("%d  ",p->data);
		p = p->next;
	
	}

}

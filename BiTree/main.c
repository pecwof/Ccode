#include <stdio.h>
#include <stdlib.h>
#include "Head.h"
int main()
{
	BiNode *root = NULL;
	root = creat_BiTree(root);
	print(root);	
	printf("\n");
	int d = Depth(root);
	printf("%d\n",d);
}


#include <stdio.h>
#include <stdlib.h>
#include "Head.h"
void print(BiNode *root)
{
    if (root == NULL)
	return ;
    	printf("%d ",root->data);
	print1(root->lchild, root->rchild);
}

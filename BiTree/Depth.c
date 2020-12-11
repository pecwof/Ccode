#include <stdio.h>
#include <stdlib.h>
#include "Head.h"
int Depth(BiNode *root)
{
	if(root == NULL)
	    return 0;
	int lh = Depth(root->lchild);
	int rh = Depth(root->rchild);

	return (lh>rh?lh:rh)+1;

}

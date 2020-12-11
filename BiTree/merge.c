#include <stdio.h>
#include <stdlib.h>
#include "Head.h"
#define EndData 0

BiNode *creat_BiTree(BiNode *root)
{
	ElemType x;
	while(1)
	{
		scanf("%d",&x);
		if(x == EndData )
		{
			break;
		
		}

		root = add_Binode(root , x);
	}
	return root;
}


BiNode *add_Binode(BiNode *root , ElemType x)
{
	BiNode *tnew = malloc(sizeof(BiNode *));
	tnew->data = x;
	tnew->lchild = NULL;
	tnew->rchild = NULL;
	if(root == NULL)
	    root = tnew;
	else
	{
			  //  printf("断点一\n");
	BiNode *p = root;
	BiNode *pre = root;
	    
		while(p)
		{
			    //printf("断点2\n");
		    	pre = p;
			    //printf("断点3\n");
			if(p->data > x)
			{
			    //printf("hahaha<\n");
				p = p->lchild;
			}
			else if(p->data < x) //使用if ,则p等于NULL,段错误,应使用else if

			{
			    //printf("hehehe>\n");
				p = p->rchild;
			}
			else if(p->data == x)
			{
				printf("a equel number\n");
				break;
			
			}
		
		}
		if (pre->data > x)
		    pre->lchild = tnew;
			    printf("%d   ",tnew->data);
			    
		if (pre->data < x)
		    pre->rchild = tnew;
	
	}
	printf("\n");

	return root;

}


int Depth(BiNode *root)
{
	if(root == NULL)
	    return 0;
	int lh = Depth(root->lchild);
	int rh = Depth(root->rchild);

	return (lh>rh?lh:rh)+1;

}

void print(BiNode *root)
{
    if (root == NULL)
	return ;
    	printf("%d ",root->data);
	print(root->lchild);
	print(root->rchild);
}

int main()
{
	BiNode *root = NULL;
	root = creat_BiTree(root);
	print(root);	
	printf("\n");
	int d = Depth(root);
	printf("%d\n",d);
}


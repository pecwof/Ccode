#ifndef __HEAD_H__
#define __HEAD_H__
typedef int ElemType;
typedef struct binode
{
	ElemType data;
	struct binode *lchild;
	struct binode *rchild;

}BiNode;


BiNode *creat_BiTree(BiNode *root);
BiNode *add_Binode(BiNode *root,ElemType x);
void print(BiNode *root);
int Depth(BiNode *root);



#endif 

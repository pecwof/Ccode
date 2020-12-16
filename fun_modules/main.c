#include <stdlib.h>
#include <stdio.h>
#include "Head.h"
int main ()
{
	Node *p = NULL;
	p = creat_linked2(p);
//  	increase_linked(*h);
	p = inversion_linked(p);
//	p = del_linked(p);
//        p = rank_linked(p);
	print_linked(p);

}

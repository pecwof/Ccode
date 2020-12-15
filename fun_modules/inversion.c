#include <stdlib.h>
#include <stdio.h>
#include "Head.h"
int inversion(int x)
{
	int y = 0;
	int n = 10;
	y = x%n;
	while(x%n != x)
	{
		n = 10*n;
		y = 10*y+(x%n)/(n/10);		
			

	
	}
	return y;


}

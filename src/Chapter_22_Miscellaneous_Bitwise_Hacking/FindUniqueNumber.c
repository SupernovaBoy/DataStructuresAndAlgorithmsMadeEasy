#include <stdio.h>

int main(void) {
	int a[7] = {1,2,1,3,1,2,1}, i, res=0;
	
	for(i=0;i<7;i++)
		res^=a[i];
	printf ("%d", res);
	return 0;
}

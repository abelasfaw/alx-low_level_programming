#include "main.h"
#include <stdio.h>

int main(void)
{
	char c = 'A';
	char c2 = 'b';
	int r,r2;
	r = _isupper(c);
	r2 = _isupper(c2);

	printf("%d %d", r, r2);
	return (0);
}

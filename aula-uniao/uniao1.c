// uniao1.c

#include <stdio.h>
#include <stdlib.h>

union tipo{
	short int x;       // 16 bits
	unsigned char c;   // 8 bits
};

int main(void)
{
	union tipo t;
	t.x = 1545;
	printf("x = %d\n", t.x);
	printf("c = %d\n", t.c);
	t.c = 69;
	printf("x = %d\n", t.x);
	printf("c = %d\n", t.c);
	return 0;
}

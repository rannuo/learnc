#include <stdio.h>

int main( )
{
	char A = 'A';
	char Z = 'Z';
	char a = 'a';
	char z = 'z';
	int i = A;
	for(;i <= Z; i++) {
		printf("%c %d, ", i, i);
	}
	printf("\n");
	i = a;
	for(; i<=z; i++) {
		printf("%c %d, ", i, i);
	}
	return 0;
}

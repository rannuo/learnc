#include <stdio.h>

int main()
{
	int a;
	char b;
	printf("Input a, b:\n");
	scanf("%d", &a);
	getchar(); /*接收上条语句回车*/
	scanf("%c", &b);
	printf("a=%d,b=%c\n", a, b);
	return 0; 
}

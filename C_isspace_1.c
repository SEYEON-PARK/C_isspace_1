#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a;
	printf("아무거나 입력하시오. : ");
	scanf_s("%c", &a, sizeof(a));
	printf("%d\n", isspace(a));

	return 0;
}
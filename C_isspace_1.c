#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a;
	printf("�ƹ��ų� �Է��Ͻÿ�. : ");
	scanf_s("%c", &a, sizeof(a));
	printf("%d\n", isspace(a));

	return 0;
}
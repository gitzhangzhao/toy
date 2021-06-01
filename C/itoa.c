#include <stdio.h>
int i = 0;
void itoa(int n, char *s)
{
	int sign;
	if ((sign = n) < 0)
	{
		sign = -n;
		s[i++] = '-';
	}
	if ((sign / 10) > 0)
		itoa((sign / 10), s);
	s[i++] = sign % 10 + '0';
}

void main()
{
	char array[10];
	int tmp, *point = &tmp;
	scanf("%d", point);
	itoa(*point, array);
	array[i] = '\0';
	printf("%s\n", array);
}

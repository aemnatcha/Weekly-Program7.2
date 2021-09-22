#include <stdio.h>
int main() {
	int input;
	int i;
	printf("Enter Number : ");
	scanf("%d", &input);
	while (i <= input)
	{
		printf("*", i);
		i++;
	}
	return 0;
}

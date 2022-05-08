#include <stdio.h>

void big(int number);

void big(int number) {
	if (number < 10) printf("%d is small.\n\n", number);
	else printf("%d is big.\n\n", number);
}

int main() {
	big(3);
	big(13);
	big((13 * 13 * 13 * 2));
	printf("Okay done.\n\n");
}
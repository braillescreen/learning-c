#include <stdio.h>

int main() {
	int guess = 500;
	int target = 1000;
	if (guess < target) {
		printf("Sorry, %d is too low.", guess);
	}
	
	else if (guess > target) {
		printf("Sorry, %d is too high.", guess);
	}
	
	else {
		printf("Congratulations! Right on target!");
	}
return 0;
}

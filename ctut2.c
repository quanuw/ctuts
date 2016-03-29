#include <stdio.h>

main() {
	setbuf(stdout, NULL);
	printf("\n");

	int num1 = 1, num2 = 1;

	printf("Is 1 > 2 : %d\n\n", num1 > num2);

	if (num1 > num2) {
		printf("%d is greater than %d\n\n", num1, num2);
	} else if (num1 < num2) {
		printf("%d is greater than %d\n\n", num1, num2);
	} else {
		printf("%d is equal to %d\n\n", num1, num1);
	}

	printf("\n");

	int custAge = 38;

	char* legalAge = (custAge > 21) ? "true" : "false";

	printf("Is the customer of legal age %s\n\n", legalAge);

	int numOfProducts = 10;

	printf("I bought %s products\n\n", (numOfProducts > 1) ? "many" : "one");



}
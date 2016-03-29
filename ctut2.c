#include <stdio.h>

void main() {
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

	printf("I bought %s products\n\n", (numOfProducts > 1) ? "many" : "one"); // test boolean before replacing string

	/*
	char take sup 1 byte

	int takes up 4 bytes

	long takes up 8 bytes

	float takes up 4 bytes

	double takes up 8 bytes
	*/
	// while loop to convert bits to decimal
	int numberHowBig = 0;
	printf("How many bits? ");
	scanf(" %d", &numberHowBig);
	printf("\n\n");
	
	int increment = 1;
	int multiplier = 1;
	int finalValue = 1;

	while (increment < numberHowBig) {
		multiplier *= 2;
		finalValue = finalValue + multiplier;
		increment++;
	}

	if (numberHowBig == 0 || numberHowBig == 1) {
		printf("Top Value: %d\n\n", numberHowBig);
	} else {
		printf("Top Value: %d\n\n", finalValue);
	}

	// while with break statement

	printf("\n");

	int secretNumber = 10;
	int numberGuessed = 0;
	while (1) {
		printf("Guess my secret number: ");
		scanf(" %d", &numberGuessed);

		if (numberGuessed == secretNumber) {
			printf("You got it");
			break;
		}
	}

	// do-while 

	printf("\n");

	char sizeOfShirt;

	do{
		printf("What size of shirt (S, M, L): ");
		scanf(" %c", &sizeOfShirt);

	}while (sizeOfShirt != 'S' && sizeOfShirt != 'M' && sizeOfShirt != 'L');

	// for-loop 
	printf("\n");

	// this style needs to be compiled in c99 else define int i before the for-loop
	// type gcc -std=c99 <filename.c> -o <filename>
	// c99 will require main to have a return type
	// if no return then use type void

	for (int i = 0; i <= 20; i++) {
		printf("%d", i);
	}

	// for-loop with continue
	for (int i = 0; i <= 20; i++) {
		if (i % 2 == 0) { // if i is even then skip the body of for-loop
			continue;
		}
		printf("%d", i);
	}

	
}
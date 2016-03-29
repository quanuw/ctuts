#include <stdio.h>

#include <string.h>
#define MYNAME "Quan Nguyen"

int globalVar = 100;


main() {
	setbuf(stdout, NULL); //disable output buffer!
	/*char firstLetter = 'Q';

	int age = 22;

	long int superBigNum = -327670000;

	float piValue = 3.14159;

	double reallyBigPi = 3.325729835792;

	printf("\n");

	printf("Pi = %.5f\n\n", piValue);

	printf("This will print to screen\n\n");

	printf("I am %d years old \n\n", age);

	char myName[]= "Quan Nguyen"; // create a string from array of chars

	strcpy(myName, "Bob Smith"); // to assign myName to new String

	printf("My Name is %s\n\n", myName);*/

	/*char middleInitial;
	printf("What is your middle initial? \n");
	scanf(" %c", &middleInitial);

	char firstName[30], lastName[30];

	printf("What is your name? ");

	scanf(" %s %s", firstName, lastName);

	printf("Your name is %s %c %s\n\n", firstName, middleInitial, lastName);

	int month, day, year;

	printf("What's your birth date? ");

	scanf(" %d/%d/%d", &month, &day, &year);

	printf("\nBirth Date %d/%d/%d/\n\n", month, day, year);*/

	int num1 = 12, num2 = 15, numAns;
	float decimal1 = 1.2, decimal2 = 1.5, decimalAns;

	printf("Integer Calculation %d\n\n", num2 / num1);

	printf("Float Calculation %f\n\n", decimal2 / decimal1);

	printf("Modulus %d\n\n", num2 % num1);

	printf("Without Parantheses %d\n\n", 3 + 6 * 10);

	printf("With Parantheses %d\n\n", (3 + 6) * 10);

	int numberEx = 12;

	int numberEx2 = 14;

	printf("numberEx / numberEx2 : %f\n\n", (float) numberEx / numberEx2); // casting int to float


}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int globalVar = 0;
int addTwoInts(int num1, int num2) {
	return num1 + num2;
}
void changeVariables() {
	int age = 40;
	printf("age before call to the function = %d\n\n", age);
	globalVar = 50;
}
void main() {
	setbuf(stdout, NULL);
	int whatToDo = 0;

	do{
		printf("\n");
		printf("1. What time is it?\n");
		printf("2. What is todays date?\n");
		printf("3. What day is it?\n");
		printf("4. Quit\n");

		scanf(" %d", &whatToDo);
	}while(whatToDo < 1 || whatToDo > 4);

	// switch statement
	switch(whatToDo){
		case(1) : printf("Print the time\n");
			break;
		case(2) : printf("Print the time\n");
			break;
		case(3) : printf("Print the time\n");
			break;
		default : printf("Bye Bye");
			exit(0);
			break;

	}

	// arrays

	printf("\n");

	char wholeName[12] = "Quan Nguyen";

	int primeNumbers[3] = {2, 3, 5};

	int morePrimes[] = {13, 17, 19, 23};

	printf("The first rpime in the list is %d\n\n", primeNumbers[0]);

	char thirdCity[] = "Paris";

	char yourCity[30];

	printf("WHat city do you live in? ");
	// scanf is very big and bloated
	// use fgets instead, must be provided an int data limit

	fgets(yourCity, 30, stdin);
	printf("Hello\n %s\n\n", yourCity);

	for (int i = 0; i < 30; i++) {
		if (yourCity[i] == '\n') { // test if char is a new line
			yourCity[i] = '\0'; // null character
			break;
		}
	}

	printf("Is your city Paris? %d\n\n", strcmp(yourCity, thirdCity));

	// concatenation
	char yourState[] = ", Pennsylvania";
	strcat(yourCity, yourState);
	printf("You live in %s\n\n");

	printf("Letters in Paris : %d\n\n", strlen(thirdCity));

	// strcpy overwrites other parts of memory = bad
	// use strlcpy

	//strlcpy(yourCity, "new city", sizeof(yourCity));
	// uses the memory allocation of old so if new city name contains more data than the old
	// city name then some of the new name will not be copied due to size limits.
	printf("new city is %s\n\n", yourCity);

	printf("\n");

	int intTotal = addTwoInts(3, 4);

	printf("The sum is %d\n\n", intTotal);

	int age = 21;

	globalVar = 50;

	printf("age before call to the function = %d\n\n", age);
	printf("age before call to the function = %d\n\n", globalVar);

}

/*
#include <stdio.h>

// Needed for exit(), rand()
#include <stdlib.h> 

// I'm a global variable. Every function can see me and change
// my value.

int globalVar = 0;

// Each function has a return type 
// (void if nothing is returned)
// Between the parentheses you can define the type and number
// of attributes passed to the function if any

int addTwoInts(int num1, int num2){

	// return the result to the function that called this one

	return num1 + num2;

}

void changeVariables(){

	// This variable is local and doesn't exist outside 
	// of this function even if it has the same name
	// as a variable outside of this function

	int age = 40;
	
	printf("age inside of function = %d\n\n", age);
	
	// Since globalVar is accessible in any function though 
	// can change it for all other functions
	
	globalVar = 100;
	
	printf("globalVar inside of function = %d\n\n", globalVar);

}

void main(){

	// FUNCTIONS ------------------
	
	// If you want to some day make a big program you will 
	// have to step out of main(). 
	// With a complex program you are going to want to write 
	// a function for each task required
	
	// How to call a function and pass data by value to it
	
	int total = addTwoInts(4,5);
	
	printf("The Sum is %d\n\n", total);
	
	// GLOBAL VS LOCAL VARIABLES ------
	
	// That brings us to the concept of local versus global
	// variables.
	
	// This age variable is local to main()
	
	int age = 10;
	
	// I changed the global variable globalVar here to 50
	
	globalVar = 50;
	
	printf("age before a call to the function = %d\n\n", age);
	
	printf("globalVar before a call to the function = %d\n\n", globalVar);
	
	changeVariables();
	
	printf("age after a call to the function = %d\n\n", age);
	
	printf("globalVar after a call to the function = %d\n\n", globalVar);

}
*/

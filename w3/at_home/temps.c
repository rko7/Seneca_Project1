

// Name: Ryeoeul Ko

// Student Number: 129035176

// Email: rko7@myseneca.ca

// Section: IPC144SVV

// Workshop: W3

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>

#define NUMS 4

int main(void) {



	//variable declarations

	int high, low;

	int i;

	int highest = 0, highestday;

	int lowest = 0, lowestday;

	float ave;


	//print the title

	printf("---=== IPC Temperature Analyzer ===---");

	//read high and low temperature



	for (i = 0; i < NUMS; i++) {


	printf("\nEnter the high value for day %d: ", i + 1);

	scanf("%d", &high);

	printf("\nEnter the low value for day %d: ", i + 1);

	scanf("%d", &low);


	if (high > highest) {

	highest = high;

	highestday = i + 1;
}
	if (low < lowest) {

	lowest = low;

	lowestday = i + 1;
}


	while (high < low || high >= 41 || low <= -41) {

	printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");

		printf("\nEnter the high value for day %d: ", i + 1 );

		scanf("%d", &high);

		printf("\nEnter the low value for day %d: ", i + 1);

		scanf("%d", &low);
}

	ave = ( (high + low)+ ave);

}
	printf("\nThe average (mean) temperature was: %.2f\n", ave / 8);
	
    


	printf("The highest temperature was %d", highest);
	printf(", on day %d\n", highestday );

	printf("The lowest temperature was %d", lowest);
	printf(", on day %d\n", lowestday );
 



	return 0;

}


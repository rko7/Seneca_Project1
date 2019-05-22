// Name: Ryeoeul Ko
// Student Number: 129035176
// Email: rko7@myseneca.ca
// section: IPC144SVV
// Workshop: W4

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>

#define NUMS 4 

int main(void)
{

	//variable declarations
	int i;
	int days;
	int ddays;
	int high[10];
	int low[10];
	int highest = 0, highestday;
	int lowest = 0, lowestday;
	float ave;

	//print the title

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	//read high and low temperature

	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &ddays); 
	printf("\n");

	for (i = 0; i < ddays; i++)  {
		 printf("Day %d - High: ", i + 1);
	 	 scanf("%d", &high[i]);
	 	 printf("Day %d - Low: ", i + 1);
		 scanf("%d", &low[i]);
	
		if (high[i] > highest) {
			highest = high[i];
			highestday = i + 1;
		}
	
		if (low[i] < lowest) {
			lowest = low[i];
			lowestday = i + 1;
		}
	}

	printf("\nDay  Hi  Low");

	for (i = 0; i < ddays; i++) {

		printf("\n%d    %d    %d", i + 1, high[i], low[i]);
	}
	printf("\n");
	printf("\nThe highest temperature was %d", highest);
	printf(", on day %d\n", highestday);
	
	printf("The lowest temperature was %d", lowest);
	printf(", on day %d\n", lowestday);

	while ( days >= 1 || days <= ddays ) {
		printf("\nEnter a number between 1 and %d", ddays);
		printf(" to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &days);
		
		if (days < 0) {
			printf("\nGoodbye!\n");	
			return 0;
		}
		
		while ( days < 1 || days > ddays) {
				printf("\nInvalid entry, please enter a number between 1 and %d",ddays);
				printf(", inclusive: ");
				scanf("%d", &days);
		}
	
		ave = 0;
		for (i = 0; i < days; i++){	
			ave += ((float)high[i] + low[i]);
			    
	}	
		float Oave = ave / (days * 2);
		printf("\nThe average temperature up to day %d",days); 
		printf(" is: %.2f\n", Oave);
	}		

return 0;
}



	 
// Name: Ryeoeul Ko
   
// Student Number: 129035176
   
// Email: rko7@myseneca.ca

// Section: IPC144SVV

// Workshop: W4

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>


int main(void) 
 {

	//variable declarations
	int days;
	
	//print the title

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	//read high and low temperature                             
       
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);     
	printf("\n");
	
	while (3 > days || 10 < days){
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &days);
		printf("\n");
	}
	
	int i = 0;
	int high[days];
	int low[days];
	
	for (i = 0; i < days; i++)  {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);
	}


		
	printf("\nDay  Hi  Low\n");

	for (i = 0; i < days; i++){ 
		printf("%d    %d    %d\n", i + 1, high[i], low[i]);
	}

 return 0;
}


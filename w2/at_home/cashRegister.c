/*
Name:           <Ryeoeul Ko>
Student#:       <129035176>
Section:        <IPC144 SVV>
*/

#include <stdio.h>

int main(void){


	double amt;
	
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amt);
	printf("GST: 1.13\n");


	
	amt *= 1.13;
	printf("Balance owing: $%.2lf\n", amt);
	
	int n_loonies;
	n_loonies = amt / 1;
	double balanceOwing = amt - (n_loonies * 1) + .005;       

	printf("Loonies required: %d", n_loonies);
	printf(", balance owing $%.2lf\n", balanceOwing);


	int n_quarters;
	n_quarters = balanceOwing / .25;
	int b2 = (int)((balanceOwing + .005) * 100) % 25;
     

	printf("Quarters required: %d", n_quarters);
	printf(", balance owing $%.2lf\n", (double)b2 / 100);
						    

	int n_dimes;
	balanceOwing = balanceOwing - (n_quarters * .25);
	n_dimes = balanceOwing / .10 ;
	b2 = (int) ((balanceOwing + .005) * 100)  % 10;

	printf("Dimes required: %d", n_dimes);
	printf(", balance owing $%.2lf\n", (double)b2 / 100);


	int n_nickels;
	balanceOwing = balanceOwing - (n_dimes * .10);
	n_nickels = balanceOwing / .05;
	b2 = (int) ((balanceOwing + .005) * 100) % 5;

	printf("Nickels required: %d", n_nickels);
	printf(", balance owing $%.2lf\n", (double)b2 / 100);


	int n_pennies;
	balanceOwing = balanceOwing - (n_nickels * .05);
	n_pennies = balanceOwing / .01;
	b2 = (int) ((balanceOwing + .005) * 100) % 1;

	printf("Pennies required: %d", n_pennies);
	printf(", balance owing $%.2lf\n", (double)b2 / 100);


       
	return 0;
}
						    

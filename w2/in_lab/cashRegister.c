/*
Name:            <Ryeoeul Ko>
Student#:        <129035176>
Section:         <IPC144>
*/



#include <stdio.h>

int main(void) {

	double amt;
	
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amt);
       


       
	int  n_loonies = amt/1;
	double balanceOwing = amt - (n_loonies * 1);

	printf("Loonies required: %d", n_loonies);
	printf(", balance owing $%.2lf\n",balanceOwing);
      
	 
	int n_quarters = balanceOwing/.25;
	balanceOwing = balanceOwing - (n_quarters * .25);

	printf("Quarters required: %d", n_quarters);
	printf(", balance owing $%.2lf\n",balanceOwing);

 
  return 0;              
/*
  This code wont execute.
*/
}


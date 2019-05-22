/*--------------------------------------------
Name: Ryeoeul Ko
Student number: 129035176
Email: rko7@myseneca.com
Section:IPC144SVV
Date:
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include "contacts.h"
#include "contactHelpers.h"




// +---------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2   |
// |        function definitions below...              |
// |                                                   |
// | *** See hint regarding the getNumbers function    |
// +---------------------------------------------------+


// getName:
void getName(struct Name* name)
{
	int option; 
	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]", name -> firstName);
	clearKeyboard();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	option = yes();
	if (option != 0)
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]", name -> middleInitial);
		clearKeyboard();
	};
	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]", name -> lastName);
	clearKeyboard();
}
// getAddress
void getAddress(struct Address* address)
{
	int option; 
	printf("Please enter the contact's street number: ");
	address -> streetNumber = getInt();
	if (address -> streetNumber < 0)
	{
		printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		address -> streetNumber = getInt();
	}
	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", address -> street);
	clearKeyboard();
	printf("Do you want to enter an apartment number? (y or n): ");
	option = yes();
	if (option != 0)
	{
		printf("Please enter the contact's apartment number: ");
		address -> apartmentNumber = getInt();
		if (address -> apartmentNumber < 0)
		{
			printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			address -> apartmentNumber = getInt();
		};
	};
	
	printf("Please enter the contact's postal code: ");
	scanf("%7[^\n]", address -> postalCode);
	clearKeyboard();
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]", address -> city);
	clearKeyboard();
}

// getNumbers
// HINT:  Update this function to use the new helper
//        function "getTenDigitPhone" where applicable
void getNumbers(struct Numbers* numbers)
{
	int option; 
	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone(numbers -> cell);
	clearKeyboard();
	printf("Do you want to enter a home phone number? (y or n): ");
	option = yes();
	if (option != 0)
	{
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone(numbers -> home);
	};
	printf("Do you want to enter a business phone number? (y or n): ");
	option = yes();
	if (option != 0)
	{
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone(numbers -> business);
	};

} 



// getContact:
// Define Empty function definition below:
void getContact (struct Contact* contact)
{
	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);
}

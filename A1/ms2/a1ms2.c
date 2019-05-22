/* -------------------------------------------
Name: Ryeoeul Ko
Student number: 129035176
Email: rko7@myseneca.ca
Section: IPC144SVV
Date:
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */
 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 // This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"
// Structure type Address declaration
// // Place your code here...

 int main (void)
{
	 // Declare variables here:
	 struct Name name = { {0} };
	 struct Address address = { 0 };
	 struct Numbers numbers = { {0} };
	 char option = 0;
	 // Display the title
     	printf("Contact Management System\n");
	printf("-------------------------\n");
     // Contact Name Input:
     	printf("Please enter the contact's first name: ");
	scanf(" %30s", name.firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &option);
		if(option == 'y' || option == 'Y')
		{	
			printf("Please enter the contact's middle initial(s): ");
			scanf(" %6[^\n]s", name.middleInitial);
		}
	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]s", name.lastName);
     // Contact Address Input:
     	printf("Please enter the contact's street number: ");
	scanf("%d", &address.streetNumber);
	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]s", address.street);
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &option);
		if(option == 'y' || option == 'Y')
		{	
			printf("Please enter the contact's apartment number: " );
			scanf("%d", &address.apartmentNumber);
		}
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s", address.postalCode);
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]s", address.city);
     // Contact Numbers Input:
  	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &option);
		if (option == 'y' || option =='Y')
		{
			printf("Please enter the contact's cell phone number: ");
			scanf(" %10s", numbers.cell);
		}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &option);
		if (option == 'y' || option == 'Y')
		{
			printf("Please enter the contact's home phone number: ");
			scanf(" %10s", numbers.home);
		}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &option);
		if (option == 'y' || option == 'Y' )
		{	
			printf("Please enter the contact's business phone number: ");
			scanf(" %10s", numbers.business);
		}
     // Display Contact Summary Details
	printf("\nContact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", name.firstName);
	printf("Middle initial(s): %s\n", name.middleInitial);
		printf("Last name: %s\n", name.lastName);
	printf("\n");

	printf("Address Details\n");
	printf("Street number: %d\n", address.streetNumber);
	printf("Street name: %s\n", address.street);
	printf("Apartment: %d\n", address.apartmentNumber);
	printf("Postal code: %s\n", address.postalCode);
	printf("City: %s\n", address.city);
	printf("\n");

	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", numbers.cell);
	printf("Home phone number: %s\n", numbers.home);
	printf("Business phone number: %s\n", numbers.business);
	
	printf("\n");
     // Display Completion Message
	printf("Structure test for Name, Address, and Numbers Done!\n");
 
    return 0;
}

/* -------------------------------------------
Name: Ryeoeul Ko       
Student number: 129035176
Email: rko7@myseneca.ca          
Section: IPC144SVV        
Date:           
----------------------------------------------
 Assignment: 2
 Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>
#include <ctype.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"
#include "contacts.h"


// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):
#define MAXCONTACTS 5


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
       while (getchar() != '\n');
}

// pause:
void pause (void)
{
       printf("(Press Enter to Continue)");
       clearKeyboard();
}

// getInt:
int getInt(void)
{
       char nl = 'x'; 
       int value;
	
	       scanf("%d%c", &value, &nl);
       do
       {
	       if(nl != '\n')
	       {
		       clearKeyboard();
		       printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		       scanf("%d%c", &value, &nl);

	       };
	       
       } while(nl != '\n');

       return value;
}

// getIntInRange:
int getIntInRange(int low, int high)
{
       int value = getInt();
	
       while(value < low || value > high)
       {
	       printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", low, high);
	       value = getInt();
       };

       return value;
}

// yes:
int yes(void)
{
       char option;
       char nl;
       
       do
       {
	       scanf("%c%c", &option, &nl);
	       if (nl != '\n')
	       {
		       clearKeyboard();
		       printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		       ;
	       }
	       else if (option == 'y' ||  option == 'Y')
	       {
		       return 1;
	       }
	       else if (option == 'n' || option == 'N')
	       {
		       return 0;
	       }       
		       
       }while((option != 'y' && option != 'Y' && option != 'n' && option != 'N') || (nl != '\n'));     
       
       return 0;
}


// menu:
int menu(void)
{
       int value = 0;

       printf("Contact Management System\n");
       printf("-------------------------\n");
       printf("1. Display contacts\n");
       printf("2. Add a contact\n");
       printf("3. Update a contact\n");
       printf("4. Delete a contact\n");
       printf("5. Search contacts by cell phone number\n");
       printf("6. Sort contacts by cell phone number\n");
       printf("0. Exit\n");
       printf("\n");


       printf("Select an option:> ");
       value = getIntInRange(0, 6);
       printf("\n");
       return value;

}


// contactManagerSystem:
void contactManagerSystem(void)
{
	struct Contact contact[MAXCONTACTS] =
        {
		{ 
			{ "Rick", {'\0'}, "Grimes" },
			{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
			{ "4161112222", "4162223333", "4163334444" } 
		},
	{
		{ "Maggie", "R.", "Greene" },
		{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		{ "9051112222", "9052223333", "9053334444" } 
	},
	{
		{ "Morgan", "A.", "Jones" },
		{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
		{ "7051112222", "7052223333", "7053334444" } 

	},
	{
		{ "Sasha", {'\0'}, "Williams" },
		{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		{ "9052223333", "9052223333", "9054445555" } },
	};
      
       int value;
       int option = 0;

       while (option == 0)
       {
	       value = menu();
	       switch(value)
	       {
		       case 1 :
			       displayContacts(contact, MAXCONTACTS);
			       pause();
			       printf("\n");
			       break;
			
		       case 2 :
			       addContact(contact, MAXCONTACTS);
			       pause();
			       printf("\n");
			       break;

		       case 3 :
			       updateContact(contact, MAXCONTACTS);
			       pause();
			       printf("\n");
			       break;

		       case 4 :
			       deleteContact(contact, MAXCONTACTS);
			       pause();
			       printf("\n");
			       break;

		       case 5 :
			       searchContacts(contact, MAXCONTACTS);
			       pause();
			       printf("\n");
			       break;

		       case 6 :
			       sortContacts(contact, MAXCONTACTS);
			       pause();
			       printf("\n");
			       break;
 
		       case 0 :
			       printf("Exit the program? (Y)es/(N)o: ");
			       option = yes();
			       printf("\n");
			       if (option == 1)
			       {       
				       printf("Contact Management System: terminated\n");
			       }
			       break;
		       default :
			       break;
	       }
       }
}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:
void getTenDigitPhone(char telNum[])
{
    int needInput = 1;
    int i;
    int flag;
    while (needInput == 1) {
        flag = 1;
	scanf("%10s", telNum);
	clearKeyboard();
	for(i = 0; i < 10; i++){
		if (!isdigit(telNum[i])){
			flag = 0;
		}
	}
	// (String Length Function: validate entry of 10 characters)
	if (strlen(telNum) == 10 && flag == 1)
	    needInput = 0;
	else
	    printf("Enter a 10-digit phone number: ");
    }
}

// findContactIndex:
int findContactIndex(const struct Contact contact[], int size, const char cellNum[])
{
	int i;
	int match = -1;
	for (i = 0; i < size; i++)
	{
		if (strcmp(contact[i].numbers.cell, cellNum) == 0)
		{
			match = i;
			break;
		}
	}
    return match;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader(void)
{
printf("+-----------------------------------------------------------------------------+\n");
printf("|                              Contacts Listing                               |\n");
printf("+-----------------------------------------------------------------------------+\n");

}


// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int totalContacts)
{
printf("+-----------------------------------------------------------------------------+\n");
printf("Total contacts: %d\n\n", totalContacts);
}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact* contact)
{
 	if (strcmp(contact -> name.middleInitial, "") == 0) 
	{
		 printf(" %s %s\n", contact -> name.firstName, contact -> name.lastName);
	}
	else 
	{
		printf(" %s %s %s\n", contact -> name.firstName, contact -> name.middleInitial, contact -> name.lastName);
	}
	printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);
	printf("       %d %s, ", contact -> address.streetNumber, contact -> address.street);
	if (contact -> address.apartmentNumber > 0)
	{
		printf("Apt# %d, ", contact -> address.apartmentNumber);
	}
	printf("%s, %s\n", contact -> address.city, contact -> address.postalCode);
}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact contact[], int size)
{
	int i, count = 0;
	
	displayContactHeader();
	for (i = 0; i < size; i++)
	{
		if (strlen (contact[i].numbers.cell) > 0)
		{
			count += 1;
			displayContact(&contact[i]);
		}
	}
	displayContactFooter(count);
}


// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact contact[], int size)
{
	char cellNum[11];
	int match;
	printf("Enter the cell number for the contact: ");
 	getTenDigitPhone(cellNum);
	match = findContactIndex(contact, size, cellNum);
	if (match > -1)
	{ 
		printf("\n");
		displayContact(&contact[match]);
		printf("\n");
	}
	else
		printf("*** Contact NOT FOUND ***\n\n");
}


// addContact:
// Put empty function definition below:
void addContact(struct Contact contact[], int size)
{
	int i, check = -1;
	for (i = 0; i < size; i++)
	{
		if (strlen (contact[i].numbers.cell) == 0)
		{
			check = i;
			break;
		}
	}
	if (check > -1) 
	{
		getContact(&contact[check]);
		 printf("--- New contact added! ---\n\n");
	}
	else
	{
 		printf("*** ERROR: The contact list is full! ***\n\n");
	}
}


// updateContact:
// Put empty function definition below:
void updateContact(struct Contact contact[], int size)
{
	char cellNum[11];
	int match;
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cellNum);
	match = findContactIndex(contact, size, cellNum);
	if (match > -1)
	{
		printf("\nContact found:\n");
		displayContact(&contact[match]);
		printf("\nDo you want to update the name? (y or n): ");
		if (yes())
		{
			contact[match].name.middleInitial[0] = '\0';
			getName(&contact[match].name);
		}
		printf("Do you want to update the address? (y or n): ");
		if (yes())
		{
			contact[match].address.apartmentNumber = 0;
			getAddress(&contact[match].address);
		}
		printf("Do you want to update the numbers? (y or n): ");
		if (yes())
		{
			contact[match].numbers.home[0] = '\0';
			contact[match].numbers.business[0] = '\0';
			getNumbers(&contact[match].numbers);
		}			
		printf("--- Contact Updated! ---\n");
	}
	else
	{
		printf("*** Contact NOT FOUND ***\n");
	}
	printf("\n");
}
// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact contact[], int size)
{
	char cellNum[11];
	int match;
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cellNum);
	match = findContactIndex(contact, size, cellNum);
	if (match > -1)
	{
		printf("\nContact found:\n");
		displayContact(&contact[match]);
		printf("\nCONFIRM: Delete this contact? (y or n): ");
		if(yes())
		{
			contact[match].numbers.cell[0] = '\0';
			contact[match].numbers.home[0] = '\0';
			contact[match].numbers.business[0] = '\0';
			printf("--- Contact deleted! ---\n");
		}
		printf("\n");
	}
	else
	{
		printf("*** Contact NOT FOUND ***\n");
	}
}

// sortContacts:
// Put empty function definition below:
void sortContacts(struct Contact contact[], int size)
{
	int i, j, total = 0;
	struct Contact tmp;
	for (i = 0; i < size; i++)
	{
		if (strlen(contact[i].numbers.cell) > 0)
		total += 1;
	}
	for (i = 0; i < total - 1; i++)
	{
		for (j = i; j < total; j++)
		{
			if (strcmp(contact[i].numbers.cell, contact[j].numbers.cell) > 0)
			{
				tmp = contact[i];
				contact[i] = contact[j];
				contact[j] = tmp;
			}
		}
	}
	printf("--- Contacts sorted! ---\n\n");
}

/* -------------------------------------------
Name: Ryeoeul Ko       
Student number: 129035176
Email: rko7@myseneca.ca          
Section: SVV        
Date:           
----------------------------------------------
 Assignment: 2
 Milestone:  3
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>


// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"



//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
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

       return value;

}


// contactManagerSystem:
void contactManagerSystem(void)
{
       int value;
       int option = 0;

       while (option == 0)
       {
	       value = menu();
	       switch(value)
	       {
		       case 1 :
			       printf("\n<<< Feature 1 is unavailable >>>\n\n");
			       pause();
			       printf("\n");
			       break;
			
		       case 2 :
			       printf("\n<<< Feature 2 is unavailable >>>\n\n");
			       pause();
			       printf("\n");
			       break;

		       case 3 :
			       printf("\n<<< Feature 3 is unavailable >>>\n\n");
			       pause();
			       printf("\n");
			       break;

		       case 4 :
			       printf("\n<<< Feature 4 is unavailable >>>\n\n");
			       pause();
			       printf("\n");
			       break;

		       case 5 :
			       printf("\n<<< Feature 5 is unavailable >>>\n\n");
			       pause();
			       printf("\n");
			       break;

		       case 6 :
			       printf("\n<<< Feature 6 is unavailable >>>\n\n");
			       pause();
			       printf("\n");
			       break;
 
		       case 0 :
			       printf("\nExit the program? (Y)es/(N)o: ");
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
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10-digit chars entered)
// ---------------------------------------------------------------------------------
// NOTE: Modify this function to validate only numeric character digits are entered
// ---------------------------------------------------------------------------------
void getTenDigitPhone(char telNum[])
{
    int needInput = 1;

	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10){
			int i;
			for (i = 0; i < 10; i++){			
				if (!isdigit(telNum[i])){
					printf("Enter a 10-digit phone number: ");
					i = 10;
					needInput = 1;
				}
				else
					needInput = 0;
			}
		}
		else
			printf("Enter a 10-digit phone number: ");
	}
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
    return -1;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader(void)
{

}


// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int)
{

}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact*)
{

}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact[], int)
{

}


// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact[], int)
{

}


// addContact:
// Put empty function definition below:
void addContact(struct Contact[], int)
{

}


// updateContact:
// Put empty function definition below:
void updateContact(struct Contact[], int)
{

}


// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact[], int)
{

}


// sortContacts:
// Put empty function definition below:
void sortContacts(struct Contact[], int)
{

}



/* -------------------------------------------
Name: Ryeoeul Ko
Student number: 129035176
Email: rko7@myseneca.ca
Section:IPC144SVV
Date:
----------------------------------------------
Assignment: 1
Milestone:  3
---------------------------------------------- */
 // Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code here...
struct Address{
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};
 // Structure type Numbers declaration
// Place your code here...
struct Numbers{
	char cell[11];
	char home[11];
	char business[11];
};

// Structure type Contact declaration
// Place your code here...
struct Contact{
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};

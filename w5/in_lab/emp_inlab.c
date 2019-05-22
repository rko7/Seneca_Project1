/*
Name: Ryeoeul Ko
Student number: 129035176
Email: rko7@myseneca.ca
Workshop: W05
Section: IPC144SVV
Date:2018/10/13
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 2
#define SIZE 2

// Declare Struct Employee
struct Employee {
	int emp_id;
	int age;
	double salary;
	};

/* main program */
int main(void) {

	int option = 0;
	int i;
	int emp_n = 0;

	// Declare a struct Employee array "emp" with SIZE elements
	// and initialize all elements to zero

	printf("---=== EMPLOYEE DATA ===---\n\n");

	struct Employee emp[SIZE] = { {0} };

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d",&option);
		printf("\n");

		switch (option) {
		case 0: // Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			// Use "%6d%9d%11.2lf" formatting in a
			// printf statement to display
			// employee id, age and salary of
			// all  employees using a loop construct

			// The loop construct will be run for SIZE times
			// and will only display Employee data
			// where the EmployeeID is > 0
			
				for (i = 0; i < SIZE && emp[i].emp_id != 0; i++)
					printf("%6d%9d%11.2lf\n", emp[i].emp_id, emp[i].age, emp[i].salary);
			printf("\n");
  
			break;
		case 2: // Adding Employee
				// @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");

			// Check for limits on the array and add employee
			// data accordingly.
			
			if ( emp_n < SIZE) 
			{
					printf("Enter Employee ID: ");
					scanf("%d", &emp[emp_n].emp_id);
					printf("Enter Employee Age: ");
					scanf("%d", &emp[emp_n].age);
					printf("Enter Employee Salary: ");
					scanf("%lf", &emp[emp_n].salary);
					}
				
			else if ( emp_n >  SIZE - 1 ){
					printf("ERROR!!! Maximum Number of Employees Reached\n");
				}				
 			emp_n++;

			printf("\n");
			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
	 	}	

	} while (option != 0);


	return 0;
}

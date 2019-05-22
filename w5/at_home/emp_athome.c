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
#define SIZE 4 

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
	int input = 0;
	int flag = 0;

	// Declare a struct Employee array "emp" with SIZE elements
	// and initialize all elements to zero

	printf("---=== EMPLOYEE DATA ===---\n\n");

	struct Employee emp[SIZE] = { {0} };

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
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

			for (i = 0; i < SIZE; i++) {
				if (emp[i].emp_id != 0) {
					printf("%6d%9d%11.2lf\n", emp[i].emp_id, emp[i].age, emp[i].salary);
				}
			}
			printf("\n");
			break;
		case 2: // Adding Employee
				// @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");

			// Check for limits on the array and add employee
			// data accordingly.

			for (i = 0; i < SIZE; i++) {
				if (emp[i].emp_id == 0) {
					printf("Enter Employee ID: ");
					scanf("%d", &emp[i].emp_id);
					printf("Enter Employee Age: ");
					scanf("%d", &emp[i].age);
					printf("Enter Employee Salary: ");
					scanf("%lf", &emp[i].salary);
					printf("\n");
					i = SIZE;
				}

				else if (i == 3) {
					printf("ERROR!!! Maximum Number of Employees Reached\n\n");
				}
			}
			break;
		case 3:
			flag = 0;
			printf("Update Employee Salary\n");
			printf("======================\n");
			
			do{
				printf("Enter Employee ID: ");
				scanf("%d", &input);
				
				for (i = 0; i < SIZE; i++)
				{
					if (input == emp[i].emp_id)
					{
						printf("The current salary is %.2lf", emp[i].salary);
						printf("\nEnter Employee New Salary: ");
						scanf("%11lf",&emp[i].salary);
						printf("\n");
						flag = 1;
						break;
					}
				
				
					else if (i == 3 && flag == 0)
					{
						printf("*** ERROR: Employee ID not found! ***"); 
						printf("\n");
					}
					
				}
			} while (flag == 0);
			break;
		case 4:
			flag = 0;
			printf("Remove Employee\n");
			printf("===============\n");

			do{
				printf("Enter Employee ID: ");
				scanf("%d", &input);

				for (i = 0; i < SIZE; i++)
				{
					if (input == emp[i].emp_id)
					{
						printf("Employee %d will be removed\n\n", emp[i].emp_id);
						emp[i].emp_id = 0;
						emp[i].age = 0;
						emp[i].salary = 0;
						flag = 1;
						break;
					}

					else if (i == 3 && flag == 0)
					{
						printf("*** ERROR: Employee ID not found! ***\n");

					}
				}
			} while (flag == 0);
		break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);


	return 0;
}

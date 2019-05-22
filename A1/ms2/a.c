#include <stdio.h>

struct Student
{
	int no;
	int cellphone;
	int homePhone;
};


int main()
{
	struct Student student;
	
	student.homePhone = 0;

	char option;

	printf("Do you have cellphone (y/n)");
	scanf("%c%*c", &option);
	if ('y' == option)
	{
		printf("What is your cellphone number?: ");
		scanf("%d", &student.cellphone);
	}
	else if ('n' == option)
	{
		student.cellphone = 0;
	}

	       while(getchar()!='\n');

	printf("Do you have homephone (y/n)");
	scanf("%c%*c", &option);
	if ('y' == option)
	{
		printf("What is your homephone number?: ");
		scanf("%d", &student.homePhone);
	}
	if(student.cellphone != 0)
	printf("This is cellphone number %d\n", student.cellphone);


	printf("This is homephone number %d\n", student.homePhone);

	//getchar();
	return 0;
}

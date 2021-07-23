/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;

struct sinfo {
	char name[50];
	int age;
	char sex[10];
	int hostel_no;
	int room_no;
	char course[10];
	int year;
} st[505];

void add_student() {

	printf("Add the Students Details\n");
	printf("Enter the name of student\n");
	scanf("%s", st[i].name);
	printf("Enter the age\n");
	scanf("%d", &st[i].age);
	printf("Enter the sex\n");
	scanf("%s", st[i].sex);
	printf("Enter the hostel number\n");
	scanf("%d", &st[i].hostel_no);
	printf("Enter the room number\n");
	scanf("%d", &st[i].room_no);
	printf("Enter the course\n");
	scanf("%s", st[i].course);
	printf("Enter the year till room is allotted\n");
	scanf("%d", &st[i].year);
	i++;
}

// Function to find the student by the name
void find() {
	char a[50];
	printf("Enter the Name of the student\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 0; j < i; j++) {
		printf("%s %s\n", a, st[j].name);
		if (!strcmp(st[j].name, a)) {
			printf("The Students Details are\n");
			printf("The name is %s\n", st[j].name);
			printf("The age is %d\n", st[j].age);
			printf("The sex is %s\n", st[j].sex);
			printf("The hostel number is %d\n", st[j].hostel_no);
			printf("The room number is %d\n", st[j].room_no);
			printf("The course is %s\n", st[j].course);
			printf("The year till room allotted is %d\n", st[j].year);
			c = 1;
			break;
		}
	}
	if (!c) printf("Student not found\n");
}

// Function to print the total
// number of students
void tot_s() {
	printf("The total number of students are %d\n", i);
	printf("\n you can have a max of 500 students\n");
	printf("you can have %d more students\n", 500 - i);
}

// Function to delete a student by the name
void del_s() {
	char a[50];
	printf("Enter the Name of the student\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 0; j < i; j++) {
		if (!strcmp(st[j].name, a)) {
			for (int k = j; k < 499; k++) {
				st[k] = st[k + 1];
			}
			i--;
			c = 1;
			break;
		}
	}
	if (!c) printf("Student not found\n");
}

// Function to update a students data
void up_s() {
	char a[500];
	printf("Enter the name to update the entry : ");
	scanf("%s", a);
	int c = 0;
	for (int j = 0; j < i; j++) {
		if (!strcmp(st[j].name, a)) {
			printf("Enter operation to be performed\n");
			printf("1. Name\n2. age\n3. sex\n"
			       "4. room no\n5. hostel number\n"
			       "6.course\n7.year till room is allotted");
			int z;
			scanf("%d", &z);
			switch (z) {
			case 1:
				printf("Enter the new name : \n");
				scanf("%s", st[j].name);
				break;
			case 2:
				printf("Enter the new age : \n");
				scanf("%d", &st[j].age);
				break;
			case 3:
				printf("Enter the new sex : \n");
				scanf("%s", st[j].sex);
				break;
			case 4:
				printf("Enter the new room number : \n");
				scanf("%d", &st[j].room_no);
				break;
			case 5:
				printf("Enter the hostel number : \n");
				scanf("%d", &st[j].hostel_no);
				break;
			case 6:
				printf("Enter the course \n");
				scanf("%s", st[j].course);
				break;
			case 7:
				printf("Enter the year till room is allotted: \n");
				scanf("%d", &st[j].year);
				break;
			default:
				printf("Enter a valid choice\n");
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}

int main() {
	int choice;
	while (1) {
		printf("The Task that you want to perform\n");
		printf("1. Add the Student Details\n");
		printf("2. Find the Student details by name\n");
		printf("3. Find the Total number of Students\n");
		printf("4. Delete the Students Details by name\n");
		printf("5. Update the Students Details by name\n");
		printf("6. To Exit\n");
		printf("Enter your choice\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			add_student();
			break;
		case 2:
			find();
			break;
		case 3:
			tot_s();
			break;
		case 4:
			del_s();
			break;
		case 5:
			up_s();
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("Enter correct choice\n");
		}
	}
	return 0;
}

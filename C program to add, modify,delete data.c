/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// You are a computer programmer preparing a software for a club. This club has around 500 members and members keep on joining and leaving every year. The software should allow the administrator to do the following:

// 1.	Enter the data for a new user 
// 2.	See/Modify existing data for a user
// 3.	Delete a user from the record
// Each user has the following data  –
// 1.	Name
// 2.	Age
// 3.	Email
// 4.	Phone Number
// 5.	Membership Amount paid
// 6.	Address
// The data has to be available in a file called members.txt  When the system starts, there is no data in the file.  It gets added as members are added to the system



#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;

struct sinfo
{
  char name[50];
  int age;
  char email[50];
  char phone_no[10];
  int memb_amount;
  char address[100];
} st[55];

void
add_student ()
{

  printf ("Add the Students Details\n");
  printf ("Enter the name of student\n");
  scanf ("%s", st[i].name);
  printf ("Enter the age\n");
  scanf ("%d", &st[i].age);
  printf ("Enter the email id\n");
  scanf ("%s", st[i].email);
  printf ("Enter the phone number\n");
  scanf ("%s", st[i].phone_no);
  printf ("Enter the membership amount paid\n");
  scanf ("%d", &st[i].memb_amount);
  printf ("Enter the address\n");
  scanf ("%s", st[i].address);
  i++;
}

// Function to find the student by the name
void
find ()
{
  char a[50];
  printf ("Enter the Name of the student\n");
  scanf ("%s", a);
  int c = 0;

  for (int j = 0; j < i; j++)
    {
      printf ("%s %s\n", a, st[j].name);
      if (!strcmp (st[j].name, a))
	{
	  printf ("The Students Details are\n");
	  printf ("The name is %s\n", st[j].name);
	  printf ("The age is %d\n", st[j].age);
	  printf ("The email id is %s\n ", st[j].email);
	  printf ("The phone number is %s\n", st[j].phone_no);
	  printf ("The membership amount paid is %d\n", st[j].memb_amount);
	  printf ("The address is %s\n", st[j].address);
	  c = 1;
	  break;
	}
    }
  if (!c)
    printf ("Student not found\n");
}

// Function to print the total
// number of students
void
tot_s ()
{
  printf ("The total number of students are %d\n", i);
  printf ("\n you can have a max of 50 students\n");
  printf ("you can have %d more students\n", 50 - i);
}

// Function to delete a student by the name
void
del_s ()
{
  char a[50];
  printf ("Enter the Name of the student\n");
  scanf ("%s", a);
  int c = 0;

  for (int j = 0; j < i; j++)
    {
      if (!strcmp (st[j].name, a))
	{
	  for (int k = j; k < 49; k++)
	    {
	      st[k] = st[k + 1];
	    }
	  i--;
	  c = 1;
	  break;
	}
    }
  if (!c)
    printf ("Student not found\n");
}

// Function to update a students data
void
up_s ()
{
  char a[50];
  printf ("Enter the name to update the entry : ");
  scanf ("%s", a);
  int c = 0;
  for (int j = 0; j < i; j++)
    {
      if (!strcmp (st[j].name, a))
	{
	  printf ("Enter operation to be performed\n");
	  printf ("1. Name\n2. age\n3. email id\n"
		  "4. membership amount paid\n" "5. phone number\n6.Address");
	  int z;
	  scanf ("%d", &z);
	  switch (z)
	    {
	    case 1:
	      printf ("Enter the new name : \n");
	      scanf ("%s", st[j].name);
	      break;
	    case 2:
	      printf ("Enter the new age : \n");
	      scanf ("%d", &st[j].age);
	      break;
	    case 3:
	      printf ("Enter the new email address : \n");
	      scanf ("%s", st[j].email);
	      break;
	    case 4:
	      printf ("Enter the new membership amount paid : \n");
	      scanf ("%d", &st[j].memb_amount);
	      break;
	    case 5:
	      printf ("Enter the phone number : \n");
	      scanf ("%s", st[j].phone_no);
	      break;
	    case 6:
	      printf ("Enter the address \n");
	      scanf ("%s", st[j].address);
	      break;
	    }
	  printf ("UPDATED SUCCESSFULLY.\n");
	}
    }
}

int
main ()
{
  int choice;
  while (1)
    {
      printf ("The Task that you want to perform\n");
      printf ("1. Add the Student Details\n");
      printf ("2. Find the Student details by name\n");
      printf ("3. Find the Total number of Students\n");
      printf ("4. Delete the Students Details by name\n");
      printf ("5. Update the Students Details by name\n");
      printf ("6. To Exit\n");
      printf ("Enter your choice\n");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  add_student ();
	  break;
	case 2:
	  find ();
	  break;
	case 3:
	  tot_s ();
	  break;
	case 4:
	  del_s ();
	  break;
	case 5:
	  up_s ();
	  break;
	case 6:
	  exit (0);
	  break;
	}
    }
  return 0;
}

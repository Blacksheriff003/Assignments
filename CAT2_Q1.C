#include <stdio.h>
#include <string.h>

struct employee
{
	
   char name[50];
   int id;
   char department[20];
   float salary;
   char email[50];
}employee;
 
int main () 
{	
 strcpy(employee.name, "John Doe");
 employee.id = 12345;
 strcpy(employee.department, "Human Resources");
 employee.salary = 55000.50;
 strcpy(employee.email, "john.doe@company.com");
 
 printf("Employee's name: %s\n", employee.name);
 printf("Employee's ID: %d\n", employee.id);
 printf("Employee's department: %s\n", employee.department);
 printf("Employee's salary: %f\n", employee.salary);
 printf("Employee's email: %s\n", employee.email);
 
 return 0;	
	
}
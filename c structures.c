//c structures 
#include <string.h>
#include <stdio.h>

struct student {
    char name[20];
    char email[35];
    char reg_no[20];
    int phone_no;
    int ID_no;
    int marks;
    float height;
};

int main() {
    struct student student1;
    
    strcpy(student1.name, "William");
    strcpy(student1.email, "Williamndwiga003@gmail.com");
    strcpy(student1.reg_no, "CT101/G/22770/24");
    student1.phone_no = 114944655;  // Removed leading 0 as phone_no is int
    student1.ID_no = 42243429;
    student1.marks = 90;
    student1.height = 5.6;
    
    printf("Name: %s \n", student1.name);
    printf("Email: %s \n", student1.email);
    printf("REG no: %s \n", student1.reg_no);
    printf("Phone No: %d \n", student1.phone_no);
    printf("ID No: %d \n", student1.ID_no);
    printf("Marks: %d \n", student1.marks);
    printf("Height: %.1f \n", student1.height);
    
    return 0;
}
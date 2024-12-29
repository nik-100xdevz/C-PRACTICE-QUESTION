#include <stdio.h>
#include <string.h>  // Needed for string functions

// Defining 'person' structure
struct person {
    char per_name[20];
    int per_age;
    char per_dob[20];
};

// Defining 'student' structure which includes 'person' structure
struct student {
    struct person info;  // Nested structure
    int per_roll_no;
    float per_marks;
};

int main() {
    struct student sl;  // Declaring a variable of type 'student'

    // Input from the user
    printf("Details of student: \n\n");

    printf("Enter per_name: ");
    scanf("%s", sl.info.per_name);  // Taking string input for name

    printf("Enter per_age: ");
    scanf("%d", &sl.info.per_age);  // Taking integer input for age

    printf("Enter per_dob (dd/mm/yyyy): ");
    scanf("%s", sl.info.per_dob);   // Taking string input for DOB

    printf("Enter roll no: ");
    scanf("%d", &sl.per_roll_no);   // Taking integer input for roll number

    printf("Enter per_marks: ");
    scanf("%f", &sl.per_marks);     // Taking float input for marks

    // Output the entered details
    printf("\n\n--- Student Details ---\n");
    printf("Per_name: %s\n", sl.info.per_name);
    printf("Per_age: %d\n", sl.info.per_age);
    printf("PER_DOB: %s\n", sl.info.per_dob);
    printf("Roll no: %d\n", sl.per_roll_no);
    printf("Per_marks: %.2f\n", sl.per_marks);

    return 0;  // Good practice to return 0 in main function
}

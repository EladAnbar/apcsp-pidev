#include <stdio.h>
#include <string.h>
#include "student.h"

int main(int argc, char* argv[])
{
 char input[100];
 struct Student student1[5];

 if (argc < 4) {
    printf("Please enter first name");
    fgets(input, 100, stdin);
    sscanf(input, "%s", student1->fname);
    printf("Please enter last name");
    fgets(input, 100, stdin);
    sscanf(input, "%s", student1->lname);
    printf("Please enter age");
    fgets(input, 100, stdin);
    sscanf(input, "%d", &student1->age);
    printf("Please enter student ID");
    fgets(input, 100, stdin);
    sscanf(input, "%d", &student1->studentID);
}
  else {
    sscanf(argv[1], "%s", student1->fname);
    sscanf(argv[2], "%s", student1->lname);
    sscanf(argv[3], "%d", &student1->age);
    sscanf(argv[4], "%d", &student1->studentID);

}
printStudent(student1);
}


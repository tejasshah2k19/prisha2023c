#include <stdio.h>

struct Student
{
    char name[30]; // we can store total 30 character in name - its an array of character
    int maths;
    int sci;
    int eng;
    float percentage;
};

int main()
{

    // how we can access name ,maths,sci =>

    struct Student s; // member
    printf("\nEnter name");
    scanf("%s", &s.name);

    printf("\nName = %s", s.name);

    return 0;
}

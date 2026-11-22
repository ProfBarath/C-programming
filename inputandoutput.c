#include<stdio.h>


int main()
{

    char name[50] ;
    int age;
    float cgpa;
    char grade;
    
    scanf("%s %d %f %c",name, &age, &cgpa, &grade);
    cgpa = (int)(cgpa*100)/100.0; // type conversion, converting float into integer, multiplying it with 100 and dividing to get the corrent decimal values given in the question
    printf("Name: %s\nAge: %d\nCGPA: %.2f\nGrade: %c",name, age, cgpa, grade);


    return 0;

}
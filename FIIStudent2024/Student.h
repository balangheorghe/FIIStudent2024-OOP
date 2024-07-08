#pragma once
#include <string.h>
#include <iostream>

class Student {
    //default access modifier: private

    int age; //data member
    char id[40]; //student id
    char name[40]; //data member -> however, usually pointers and memory dynamic allocation is preffered
    
    float mathGrade;  
    float englishGrade; 
    float csGrade; 

public: //access modifier
    Student(); //default construct
    Student(int age, const char* name, const char * id); //construct which receives an age and a name
    ~Student();//destructor
    
    int GetAge(); //public method to get the age
    char* GetName(); //public method to get the name
    char* GetId(); //public method to get the id

    void SetMathGrade(float mathGrade);
    void SetMathGrade(int mathGrade);
    void SetMathGrade(int mathGrade, int scalar);
    void SetEnglishGrade(float englishGrade);
    void SetCsGrade(float csGrade);

    float GetAverage();

    void PrintStudent();
};

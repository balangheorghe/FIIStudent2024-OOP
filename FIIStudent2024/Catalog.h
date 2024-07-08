#pragma once
#include "Student.h"

class Catalog
{
    Student** students; //array alocat dynamic de obiecte de tip student*
    //Student students[10];
    //int maxStudents = 10;
    int maxStudents;
    int currentStudents; //numarul curent de studenti din catalog

public:
    Catalog(int maxStudents);
    ~Catalog();

    bool AddStudent(Student* s);
    void RemoveStudent(const char* id);

    void PrintStudents();

    Catalog& operator+=(Student* s);
    Student* operator[](const char* id);
    bool operator==(int value);

    float GetCatalogAverage();
};


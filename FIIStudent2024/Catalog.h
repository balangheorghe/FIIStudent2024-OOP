#pragma once
#include "Student.h"

class Catalog
{
    Student** students; //array alocat dynamic de obiecte de tip student*
    int maxStudents;
    int currentStudents;

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


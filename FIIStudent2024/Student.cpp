#include "Student.h"

Student::Student()
{
    std::cout << "Am apelat constructorul default pentru clasa Student!\n";
    this->age = 0;
    this->csGrade = 0;
    this->englishGrade = 0;
    this->mathGrade = 0;
    this->id[0] = 0;
    this->name[0] = 0;
}
Student::Student(int age, const char* name, const char* id)
{
    std::cout << "Am apelat constructorul pentru clasa Student ce primeste 3 parametri (age, name, id)!\n";
    this->englishGrade = 0;
    this->mathGrade = 0;
    this->csGrade = 0;
    this->age = age;
    strcpy_s(this->name, name);
    strcpy_s(this->id, id);
}

Student::~Student()
{
    std::cout << "S-a apelat destructorul pentru clasa Student\n";
}

int Student::GetAge()
{
    return this->age;
}

char* Student::GetName()
{
    return this->name;
}

char* Student::GetId()
{
    return this->id;
}

void Student::SetMathGrade(float mathGrade)
{
    this->mathGrade = mathGrade;
}

void Student::SetMathGrade(int mathGrade)
{
    this->mathGrade = (float)mathGrade;
}

void Student::SetMathGrade(int mathGrade, int scalar)
{
    this->mathGrade = (float) (mathGrade * scalar);
}

void Student::SetEnglishGrade(float englishGrade)
{
    this->englishGrade = englishGrade;
}

void Student::SetCsGrade(float csGrade)
{
    this->csGrade = csGrade;
}

float Student::GetAverage()
{
    return (this->englishGrade + this->mathGrade + this->csGrade) / 3.0f;
}

void Student::PrintStudent()
{
    std::cout << "Student: " << this->name << " with id " << this->id << ": " << this->mathGrade << ", " << this->englishGrade << ", " << this->csGrade << " -> " << this->GetAverage() << "\n";
}

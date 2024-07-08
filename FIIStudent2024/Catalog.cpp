#include "Catalog.h"

Catalog::Catalog(int maxStudents)
{
    std::cout << "S-a apelat constructorul cu maxStudents pentru catalog: " << maxStudents << "\n";
    this->maxStudents = maxStudents;
    this->currentStudents = 0;
    this->students = new Student * [this->maxStudents]; //aloc memorie pentru maxStudents obiecte de tipul Student*
}

Catalog::~Catalog()
{
    std::cout << "S-a apelat destructorul pentru catalog\n";
    if (this->students != nullptr)
    {
        delete this->students;
        this->students = nullptr;
    }
}

bool Catalog::AddStudent(Student* s)
{
    if (this->currentStudents < this->maxStudents)
    {
        this->students[this->currentStudents++] = s;
        return true;
    }
    return false;
}

void Catalog::RemoveStudent(const char* id)
{
    for (int i = 0; i < this->currentStudents; i++)
    {
        if (strcmp(this->students[i]->GetId(), id) == 0)
        {
            for (int j = i; j < this->currentStudents - 1; j++)
            {
                this->students[j] = this->students[j + 1];
            }
            this->currentStudents--;
        }
    }
}

void Catalog::PrintStudents()
{
    std::cout << "Studentii din catalog sunt: " << "\n";
    for (int i = 0; i < this->currentStudents; i++)
    {
        this->students[i]->PrintStudent();
    }
}

Catalog& Catalog::operator+=(Student* s)
{
    if (this->currentStudents < this->maxStudents)
    {
        this->students[this->currentStudents++] = s;
    }
    return *this;
}

Student* Catalog::operator[](const char* id)
{
    std::cout << "Sunt in operator de indexare [] " << id << "\n";
    for (int i = 0; i < this->currentStudents; i++)
    {
        if (strcmp(this->students[i]->GetId(), id) == 0)
        {
            return this->students[i];
        }
    }
    return nullptr;
}

bool Catalog::operator==(int value)
{
    std::cout << "Sunt in operator==, am primit " << value << "\n";
    return this->currentStudents == value;
}

float Catalog::GetCatalogAverage()
{
    if (this->currentStudents == 0)
        return 0.0f;

    float sum = 0.0f;
    for (int i = 0; i < this->currentStudents; i++)
    {
        sum += this->students[i]->GetAverage();
    }
    return sum / this->currentStudents;
}


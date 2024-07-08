#include <iostream>
#include "Catalog.h"
#include "Camion.h"
#include "Masina.h"
#include "Garaj.h"

using namespace std;

#define EXPRESSION 5+6

int main()
{
    /*
    PRIMA PARTE
    */

    Student s;
    

    std::cout << 5 / EXPRESSION << "\n";

    std::cout << "\n============================================\n\n";

    Student student1;
    Student student2(19, "Andrei Popescu", "RSL001");
    Student student3(19, "Maria Dumitrescu", "RSL002");
    Student student4(20, "Ioana Georgescu", "RSL003");
    Student student5(20, "Radu Ionescu", "RSL004");

    std::cout << "\n============================================\n\n";

    student1.PrintStudent();
    student2.PrintStudent();
    student3.PrintStudent();
    student4.PrintStudent();
    student5.PrintStudent();

    std::cout << "\n============================================\n\n";

    student2.SetCsGrade(9); student2.SetEnglishGrade(10); student2.SetMathGrade(8);
    student3.SetCsGrade(8); student3.SetEnglishGrade(9); student3.SetMathGrade(9);
    student4.SetCsGrade(7); student4.SetEnglishGrade(8); student4.SetMathGrade(10);
    student5.SetCsGrade(10); student5.SetEnglishGrade(7); student5.SetMathGrade(7);

    student2.PrintStudent();
    student3.PrintStudent();
    student4.PrintStudent();
    student5.PrintStudent();

    std::cout << "\n============================================\n\n";

    Catalog c(4);

    std::cout << "\n============================================\n\n";

    c.AddStudent(&student2); //trimit adresa obiectului student2
    c += &student3;
    (c += &student4) += &student5;
    c.PrintStudents();

    std::cout << "\n============================================\n\n";

    Catalog c2(3);
    (c2 += &student2) += &student3;
    std::cout << "Adaug in c2 student4: " << boolalpha <<  c2.AddStudent(&student4) << "\n";
    std::cout << "Adaug in c2 student5: " << boolalpha << c2.AddStudent(&student5) << "\n";
    c2.PrintStudents();

    std::cout << "\n============================================\n\n";

    //verific daca toti catalogul este la capacitate maxima; daca da, afisez media studentilor
    if (c2 == 3)
    {
        std::cout << "Media din catalog c2 este: " << c2.GetCatalogAverage() << "\n";
    }

    if (c2 == 2)
    {
        std::cout << "Nu ar trebui sa se afiseze asta!";
    }

    std::cout << "\n============================================\n\n";

    c2.RemoveStudent("RSL003");
    c2.PrintStudents();

    std::cout << "\n============================================\n\n";

    Student s6(19, "Alexandru Mihai", "RSL006");
    c2 += &s6;
    c2.PrintStudents();
    std::cout << "Acum, media din catalog c2 este: " << c2.GetCatalogAverage() << "\n";

    std::cout << "\n============================================\n\n";

    std::cout << c2["RSL006"]->GetName() << " " << c2["RSL006"]->GetAverage() << "\n";

    std::cout << "\n============================================\n\n";

    /*
    A DOUA PARTE
    */

    //Vehicul v; //error, nu putem instantia obiecte cu metode virtuale pure
    Vehicul* v; //dar putem lucra cu pointeri
    Camion camion;
    camion.porneste();
    camion.incarcaRemorca();
    camion.drive();

    cout << " --- \n";

    v = &camion;
    v->porneste();
    v->drive();

    cout << " --- \n";

    Masina masina;
    masina.porneste();
    masina.asteaptaPasagerii();
    masina.drive();

    cout << " --- \n";

    v = &masina;
    v->porneste();
    v->drive();

    cout << " --- \n";

    std::cout << "\n============================================\n\n";

    Garaj g(2);
    g += &masina;
    g += &camion;
    g.pornesteVehicule();

    std::cout << "\n============================================\n\n";
    std::cout << "Fac un delete explicit\n";
    delete &g;

    std::cout << "\n============================================\n\n";

    //!!incercati codul atat pe x64 cat si pe x86!!
    cout << "Sizeof masina: " << sizeof(masina) << "\n";
    cout << "Sizeof camion: " << sizeof(camion) << "\n";

    std::cout << "\n============================================\n\n";
}

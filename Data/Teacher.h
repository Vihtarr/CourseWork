#ifndef TEACHER_H
#define TEACHER_H


#include "Person.h"

class Teacher : public Person {
public:

    Teacher();
    Teacher(std::string name, int dayOfBirth, int monthOfBirth, int yearOfBirth,
            int height, int weight, std::string country, std::string city, std::string university,
            std::string subject, std::string department, std::string degree, int experience, int numberOfWorks);

    std::string Print() override;

    std::string ChangeDegree();
    int ChangeSalary();
    bool isTrueDepartment(std::string department);
    std::string GetPersonType() const override;
private:
    std::string university;
    std::string subject;
    std::string department;
    std::string degree;
    int experience;
    int salary;
    int numberOfWorks;
};


#endif //TEACHER_H

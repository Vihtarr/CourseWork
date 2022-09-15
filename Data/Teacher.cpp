#include "Teacher.h"

Teacher::Teacher() : Person() {
    university = "KPI";
    subject = "Math";
    department = "Mathematics";
    degree = "Doctor";
    experience = 10;
    numberOfWorks = 10;
    ChangeSalary();
}

Teacher::Teacher(std::string name, int dayOfBirth, int monthOfBirth, int yearOfBirth, int height, int weight,
                 std::string country, std::string city, std::string university, std::string subject,
                 std::string department, std::string degree, int experience, int numberOfWorks) :
                 Person(name, dayOfBirth, monthOfBirth, yearOfBirth, height, weight, country, city),
                 university(university), subject(subject), department(department), degree(degree),
                 experience(experience), numberOfWorks(numberOfWorks) {
    ChangeSalary();
}

std::string Teacher::Print() {
    return "Name: " + fullName + "\nBirth date: " + std::to_string(dayOfBirth) + "." +
           std::to_string(monthOfBirth) + "." + std::to_string(yearOfBirth) + "\nHeight: " +
           std::to_string(height) + "\nWeight: " + std::to_string(weight) + "\nCountry: " +
           country + "\nCity: " + city + "\nUniversity: " + university + "\nSubject: " + subject +
           "\nDepartment: " + department + "\nDegree: " + degree + "\nExperience: " + std::to_string(experience) +
           "\nSalary: " + std::to_string(salary) + "\nNumber of works: " + std::to_string(numberOfWorks);
}

std::string Teacher::ChangeDegree() {
    if (numberOfWorks >= 25)
    {
        degree = "Doctor";
        return degree;
    }
    if (numberOfWorks >= 8)
    {
        degree = "Candidate";
        return degree;
    }
    degree = "No degree";
    return degree;
}

int Teacher::ChangeSalary() {
    if (degree == "Doctor")
    {
        salary = 1000 + 100 * experience;
        return salary;
    }
    if (degree == "Candidate")
    {
        salary = 800 + 50 * experience;
        return salary;
    }
    salary = 500 + 25 * experience;
    return salary;
}

bool Teacher::isTrueDepartment(std::string department) {
    return this->department == department;
}

std::string Teacher::GetPersonType() const {
    return "Teacher";
}

#include <iostream>
#include <vector>
#include "Data/Person.h"
#include "Data/Teacher.h"
#include "Data/Worker.h"

int Select();
void CreatePerson(std::vector<Person*> *people);
void CreateWorker(std::vector<Worker *> *workers);
void CreateTeacher(std::vector<Teacher *> *teachers);
void DoTeachers(std::vector<Teacher *> *teachers);

void DoWorkers(std::vector<Worker *> *workers);

void DoPeople(std::vector<Person *> *people);

int main() {
    std::vector<Person*> people;
    std::vector<Worker*> workers;
    std::vector<Teacher*> teachers;


    int choice = Select();
    while(true)
    {
        switch (choice)
        {
            case 0:
                return 0;
            case 1:
                CreatePerson(&people);
                break;
            case 2:
                CreateWorker(&workers);
                break;
            case 3:
                CreateTeacher(&teachers);
                break;
            case 4:
                if(!people.empty())
                {
                    for (auto person: people) {
                        std::cout << person->Print() << std::endl;
                    }
                } else {
                    std::cout << "There are no people" << std::endl;
                }
                if(!workers.empty())
                {
                    for (auto worker: workers) {
                        std::cout << worker->Print() << std::endl;
                    }
                } else {
                    std::cout << "There are no workers" << std::endl;
                }
                if(!teachers.empty())
                {
                    for (auto teacher: teachers) {
                        std::cout << teacher->Print() << std::endl;
                    }
                } else {
                    std::cout << "There are no teachers" << std::endl;
                }
                break;
            case 5:
                DoPeople(&people);
                break;
            case 6:
                DoWorkers(&workers);
                break;
            case 7:
                DoTeachers(&teachers);
                break;
        }
        choice = Select();
    }

}

void DoPeople(std::vector<Person *> *people) {
    std::cout << "You have " << people->size() << " people" << std::endl;
    std::cout << "1. Change country to one of the following: " << std::endl;
    std::cout << "2. Is following person higher then 200 cm: " << std::endl;
    int choice = 0;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter a number of person: ";
        int number;
        std::cin >> number;
        (*people)[number - 1]->ChangeCountry();
        std::cout << "Now person live in Ukraine, Odessa"<< std::endl;
    } else if (choice == 2)
    {
        std::cout << "Enter a number of person: ";
        int number;
        std::cin >> number;
        bool is = (*people)[number - 1]->IsHigherThan();
        std::cout << "Person is ";
        if(is)
        {
            std::cout << "higher then 200 cm" << std::endl;
        } else
        {
            std::cout << "lower then 200 cm" << std::endl;
        }
    } else
    {
        std::cout << "Wrong choice" << std::endl;
    }
}

void DoWorkers(std::vector<Worker *> *workers) {
    std::cout << "You have " << workers->size() << " workers" << std::endl;
    std::cout << "1. Change position to one of the following: " << std::endl;
    std::cout << "2. Change salary to one of the following: " << std::endl;
    int choice = 0;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter a number of worker: ";
        int number;
        std::cin >> number;
        std::cout << "Enter a new position: ";
        std::string position;
        std::cin >> position;
        std::cout << "Now worker have " << (*workers)[number - 1]->ChangePosition(position) << " position" << std::endl;
    } else if (choice == 2)
    {
        std::cout << "Enter a number of worker: ";
        int number;
        std::cin >> number;
        std::cout << "Now worker have " << (*workers)[number - 1]->ChangeSalary() << " salary" << std::endl;
    } else
    {
        std::cout << "Wrong choice" << std::endl;
    }
}

void CreateTeacher(std::vector<Teacher *> *teachers) {
    std::string name, name2, name3;
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
    int height;
    int weight;
    std::string country;
    std::string city;
    std::string university;
    std::string subject;
    std::string department;
    std::string degree;
    int experience;
    int numberOfWorks;

    std::cout << "Enter name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter second name: " << std::endl;
    std::cin >> name2;
    std::cout << "Enter third name: " << std::endl;
    std::cin >> name3;
    std::cout << "Enter day of birth: " << std::endl;
    std::cin >> dayOfBirth;
    std::cout << "Enter month of birth: " << std::endl;
    std::cin >> monthOfBirth;
    std::cout << "Enter year of birth: " << std::endl;
    std::cin >> yearOfBirth;
    std::cout << "Enter height: " << std::endl;
    std::cin >> height;
    std::cout << "Enter weight: " << std::endl;
    std::cin >> weight;
    std::cout << "Enter country: " << std::endl;
    std::cin >> country;
    std::cout << "Enter city: " << std::endl;
    std::cin >> city;
    std::cout << "Enter university: " << std::endl;
    std::cin >> university;
    std::cout << "Enter subject: " << std::endl;
    std::cin >> subject;
    std::cout << "Enter department: " << std::endl;
    std::cin >> department;
    std::cout << "Enter degree (Doctor, Candidate, etc): " << std::endl;
    std::cin >> degree;
    std::cout << "Enter experience: " << std::endl;
    std::cin >> experience;
    std::cout << "Enter number of works: " << std::endl;
    std::cin >> numberOfWorks;
    name = name + " " + name2 + " " + name3;

    Teacher *teacher = new Teacher(name, dayOfBirth, monthOfBirth, yearOfBirth, height, weight, country, city, university, subject, department, degree, experience, numberOfWorks);
    teachers->push_back(teacher);
}

void CreateWorker(std::vector<Worker *> *workers) {
    std::string name, name2, name3;
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
    int height;
    int weight;
    std::string country;
    std::string city;
    std::string company;
    std::string position;

    std::cout << "Enter name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter second name: " << std::endl;
    std::cin >> name2;
    std::cout << "Enter third name: " << std::endl;
    std::cin >> name3;
    std::cout << "Enter day of birth: " << std::endl;
    std::cin >> dayOfBirth;
    std::cout << "Enter month of birth: " << std::endl;
    std::cin >> monthOfBirth;
    std::cout << "Enter year of birth: " << std::endl;
    std::cin >> yearOfBirth;
    std::cout << "Enter height: " << std::endl;
    std::cin >> height;
    std::cout << "Enter weight: " << std::endl;
    std::cin >> weight;
    std::cout << "Enter country: " << std::endl;
    std::cin >> country;
    std::cout << "Enter city: " << std::endl;
    std::cin >> city;
    std::cout << "Enter company: " << std::endl;
    std::cin >> company;
    std::cout << "Enter position (Manager, Engineer, Worker): " << std::endl;
    std::cin >> position;
    name = name + " " + name2 + " " + name3;

    Worker *worker = new Worker(name, dayOfBirth, monthOfBirth, yearOfBirth, height, weight, country, city, company, position);
    workers->push_back(worker);
}

int Select()
{
    int choice = 0;
    std::cout << "1. Add a person" << std::endl;
    std::cout << "2. Add a worker" << std::endl;
    std::cout << "3. Add a teacher" << std::endl;
    std::cout << "4. Print all people" << std::endl;
    std::cout << "5. Do something with person" << std::endl;
    std::cout << "6. Do something with worker" << std::endl;
    std::cout << "7. Do something with teacher" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cin >> choice;
    return choice;
}
void DoTeachers(std::vector<Teacher *> *teachers) {
    std::cout << "You have " << teachers->size() << " teachers" << std::endl;
    std::cout << "1. Print all teachers of given department" << std::endl;
    std::cout << "2. Change degree to one of the following: " << std::endl;
    std::cout << "3. Change salary to one of the following: " << std::endl;
    int choice = 0;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter a department: ";
        std::string department;
        std::cin >> department;
        for (auto teacher: *teachers) {
            if (teacher->isTrueDepartment(department)) {
                std::cout << teacher->Print() << std::endl;
            }
        }
    } else if (choice == 2) {
        std::cout << "Enter a number of teacher: ";
        int number;
        std::cin >> number;
        std::cout << "Now teacher have " << (*teachers)[number - 1]->ChangeDegree() << " degree" << std::endl;
    } else if (choice == 3)
    {
        std::cout << "Enter a number of teacher: ";
        int number;
        std::cin >> number;
        std::cout << "Now teacher have " << (*teachers)[number - 1]->ChangeSalary() << " salary" << std::endl;
    } else
    {
        std::cout << "Wrong choice" << std::endl;
    }

}

void CreatePerson(std::vector<Person*> *people)
{
    std::string name, name2, name3;
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
    int height;
    int weight;
    std::string country;
    std::string city;

    std::cout << "Enter name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter second name: " << std::endl;
    std::cin >> name2;
    std::cout << "Enter third name: " << std::endl;
    std::cin >> name3;
    std::cout << "Enter day of birth:   " << std::endl;
    std::cin >> dayOfBirth;
    std::cout << "Enter month of birth: " << std::endl;
    std::cin >> monthOfBirth;
    std::cout << "Enter year of birth: " << std::endl;
    std::cin >> yearOfBirth;
    std::cout << "Enter height: " << std::endl;
    std::cin >> height;
    std::cout << "Enter weight: " << std::endl;
    std::cin >> weight;
    std::cout << "Enter country: " << std::endl;
    std::cin >> country;
    std::cout << "Enter city: " << std::endl;
    std::cin >> city;

    name = name + " " + name2 + " " + name3;
    Person *person = new Person(name, dayOfBirth, monthOfBirth, yearOfBirth, height, weight, country, city);
    people->push_back(person);
}

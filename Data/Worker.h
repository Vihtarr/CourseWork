#ifndef WORKER_H
#define WORKER_H


#include "Person.h"

class Worker : public Person {
public:
    Worker();
    Worker(std::string name, int dayOfBirth, int monthOfBirth, int yearOfBirth,
           int height, int weight, std::string country, std::string city, std::string company,
           std::string position);

    std::string Print() override;

    std::string ChangePosition(std::string position);
    int ChangeSalary();

    std::string GetPersonType() const override;

private:
    std::string factory;
    std::string position;
    int salary;
};


#endif //WORKER_H

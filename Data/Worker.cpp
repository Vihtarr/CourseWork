#include "Worker.h"

Worker::Worker() {
    this->factory = "No factory";
    this->position = "No position";
    this->salary = 0;
}

Worker::Worker(std::string name, int dayOfBirth, int monthOfBirth, int yearOfBirth, int height, int weight,
               std::string country, std::string city, std::string company, std::string position) :
               Person(name, dayOfBirth, monthOfBirth, yearOfBirth, height, weight, country, city),
               factory(company), position(position) {
    ChangeSalary();
}

std::string Worker::Print() {
    return "Name: " + fullName + "\nBirth date: " + std::to_string(dayOfBirth) + "." +
                  std::to_string(monthOfBirth) + "." + std::to_string(yearOfBirth) + "\nHeight: " +
                  std::to_string(height) + "\nWeight: " + std::to_string(weight) + "\nCountry: " +
                  country + "\nCity: " + city + "\nFactory: " + factory + "\nPosition: " + position +
                  "\nSalary: " + std::to_string(salary);
}

std::string Worker::ChangePosition(std::string position) {
    this->position = position;
    return position;
}

int Worker::ChangeSalary() {
    if(position == "Manager") {
        salary = 1000;
    } else if(position == "Engineer") {
        salary = 800;
    } else if(position == "Worker") {
        salary = 500;
    } else {
        salary = 100;
    }
    return salary;
}

std::string Worker::GetPersonType() const {
    return "Worker";
}

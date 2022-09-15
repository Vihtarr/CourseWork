#include "Person.h"

Person::Person() {
    fullName = "Ivan Ivanov";
    dayOfBirth = 1;
    monthOfBirth = 1;
    yearOfBirth = 1970;
    height = 180;
    weight = 80;
    country = "Ukraine";
    city = "Kiev";
}

Person::Person(std::string name, int dayOfBirth, int monthOfBirth, int yearOfBirth,
               int height, int weight, std::string country, std::string city) :
    fullName(name), dayOfBirth(dayOfBirth), monthOfBirth(monthOfBirth), yearOfBirth(yearOfBirth),
    country(country), city(city) {

    if(height > 0) {
        this->height = height;
    } else {
        this->height = 0;
    }
    if(weight > 0) {
        this->weight = weight;
    } else {
        this->weight = 0;
    }
}

std::string Person::Print() {
    return "Name: " + fullName + "\nBirth date: " + std::to_string(dayOfBirth) + "." +
                   std::to_string(monthOfBirth) + "." + std::to_string(yearOfBirth) + "\nHeight: " +
                   std::to_string(height) + "\nWeight: " + std::to_string(weight) + "\nCountry: " +
                   country + "\nCity: " + city;
}

bool Person::IsHigherThan() const {
    return height > 200;
}

void Person::ChangeCountry() {
    country = "Ukraine";
    city = "Odessa";
}

std::string Person::GetPersonType() const {
    return "Person";
}

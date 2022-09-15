#ifndef PERSON_H
#define PERSON_H
#include <string>


class Person {
public:
    Person();
    Person(std::string name, int dayOfBirth, int monthOfBirth, int yearOfBirth,
           int height, int weight, std::string country, std::string city);

    virtual std::string Print();

    bool IsHigherThan() const;
    void ChangeCountry();
    virtual std::string GetPersonType() const;
protected:
    std::string fullName;
    int dayOfBirth{};
    int monthOfBirth{};
    int yearOfBirth{};
    int height{};
    int weight{};
    std::string country;
    std::string city;
};


#endif //PERSON_H
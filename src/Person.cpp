#include "Person.hpp"

void Person::print(){
    cout << "Name: " << name << endl;
    cout << "Age:  " << age << endl;
}

ostream& operator<<(ostream& os, const Person& person) {
    os << "Name: " << person.name << "\n";
    os << "Age:  " << person.age << "\n";
    return os;
}
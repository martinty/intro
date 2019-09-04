#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(): name(""), age(0) {}
    Person(string name, int age): name(name), age(age) {}
    ~Person() = default;
    void print();
    friend ostream& operator<<(ostream& os, const Person& person);
};
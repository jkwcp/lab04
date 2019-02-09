//
// Created by Jackie Wang on 2019-02-07.
//

#include "animal.hpp"

long animal::counter = 1;

animal::animal() {
    ID = counter++;
    alive = true;
    age = 0;
    location.first = 0;
    location.second = 0;
    std::cout << "animal default constructor" << std::endl;
}

animal::animal(int a, double x, double y) {
    ID = counter++;
    alive = true;
    age = a;
    location.first = x;
    location.second = y;
    std::cout << "animal 3 parameters constructor" << std::endl;
}

void animal::move(double x, double y) {
    location.first = x;
    location.second = y;
}

void animal::move(double x, double y, double z) {
    location.first = x;
    location.second = y;
}

animal::animal(const animal &a) : ID(counter++), alive(a.alive), age(a.age), location(a.location) {
    std::cout << "animal copy constructor" << std::endl;
}

animal::~animal() {
    std::cout << "animal destructor" << std::endl;
}

void animal::sleep() {
    std::cout << "animal sleep" << std::endl;
}

void animal::eat() {
    std::cout << "animal eat" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const animal &obj) {
    os << "\nanimal ID: ";
    os << obj.ID;
    os << "\nage: ";
    os << obj.age;
    os << "\nalive: ";
    os << obj.alive;
    os << "\nlocation: x = ";
    os << obj.location.first;
    os << " y = ";
    os << obj.location.second;
    os << "" << endl;
    return os;
}

/*
virtual string getInfo(animal *aPtr)
{
    //gets x,y,z and all info from animal and returns a string
}*/


inline void animal::setID(long n) {
    ID = n;
}

inline long animal::getID() const {
    return ID;
}

inline void animal::setage(int n) {
    age = n;
}

inline long animal::getage() const {
    return age;
}

inline void animal::setalive(bool t) {
    alive = t;
}

inline bool animal::getalive() const {
    return alive;
}

inline void animal::setlocation(pair<double, double> p) {
    location = p;
}

inline pair<double, double> animal::getlocation() const {
    return location;
}
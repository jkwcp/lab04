//
// Created by Jackie Wang on 2019-02-07.
//

#include "canine.hpp"

canine::canine() : animal() {
    std::cout << "canine default constructor" << std::endl;
}

canine::canine(int a, double x, double y) : animal(a, x, y) {
    std::cout << "canine 3 parameter3 constructor" << std::endl;
}

void canine::move(double x, double y) {
    animal::move(x, y);
}

canine::canine(const canine &c) {
    setID(c.getID());
    setalive(c.getalive());
    setage(c.getage());
    setlocation(c.getlocation());
    std::cout << "canine copy constructor" << std::endl;
}

canine::~canine() {
    std::cout << "canine destructor" << std::endl;
}

void canine::sleep() {
    std::cout << "canine sleep" << std::endl;
}

void canine::eat() {
    std::cout << "canine eat" << std::endl;
}

void canine::hunt() {
    std::cout << "canine hunt" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const canine &obj) {
    os << "\ncanine ID: ";
    os << obj.getID();
    os << "\nage: ";
    os << obj.getage();
    os << "\nalive: ";
    os << obj.getalive();
    os << "\nlocation: x = ";
    os << obj.getlocation().first;
    os << " y = ";
    os << obj.getlocation().second;
    cout << "" << endl;
    return os;
}

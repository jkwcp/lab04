//
// Created by Jackie Wang on 2019-02-07.
//

#include "bird.hpp"


bird::bird() : animal() {
    height = 0;
    std::cout << "bird default constructor" << std::endl;
}

bird::bird(int a, double x, double y, double z) : animal(a, x, y) {
    height = z;
    std::cout << "bird 4 parameters constructor" << std::endl;
}

void bird::move(double x, double y, double z) {
    animal::move(x, y);
    height = z;
}

bird::bird(const bird &b) {
    setID(b.getID());
    setalive(b.getalive());
    setage(b.getage());
    setlocation(b.getlocation());
    height = b.height;
    std::cout << "bird copy constructor" << std::endl;
}

bird::~bird() {
    std::cout << "bird destructor" << std::endl;
}

void bird::sleep() {
    std::cout << "bird sleep" << std::endl;
}

void bird::eat() {
    std::cout << "bird eat" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const bird &obj) {
    os << "\nbird ID: ";
    os << obj.getID();
    os << "\nage: ";
    os << obj.getage();
    os << "\nalive: ";
    os << obj.getalive();
    os << "\nlocation: x = ";
    os << obj.getlocation().first;
    os << " y = ";
    os << obj.getlocation().second;
    os << " height = ";
    os << obj.height;
    cout << "" << endl;
    return os;
}
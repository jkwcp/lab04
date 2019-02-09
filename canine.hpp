//
// Created by Jackie Wang on 2019-02-07.
//

#ifndef LAB04_CANINE_HPP
#define LAB04_CANINE_HPP


#include "animal.hpp"

class canine : public animal {

public:
    //default constructor
    canine();

//3 parameters constructor for canine
    canine(int a, double x, double y);

//move method for canine
    void move(double x, double y) override;

//copy constructor for canine
    canine(const canine &c);

//destructor
    ~canine() override;

//sleep method for canine
    void sleep() override;

//eat method for canine
    void eat() override;

//hunt mehtod for canine
    void hunt();

//insertion operator overload for canine
    friend std::ostream &operator<<(std::ostream &os, const canine &obj);
};

#endif //LAB4_CANINE_HPP



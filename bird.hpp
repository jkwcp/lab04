//
// Created by Jackie Wang on 2019-02-07.
//

#ifndef LAB04_BIRD_HPP
#define LAB04_BIRD_HPP

#include "animal.hpp"

class bird : public animal {

private:
// height of bird
    double height;

public:
    //default constructor
    bird();

    //4 parameters constructor
    bird(int a, double x, double y, double z);

    //move method for bird
    void move(double x, double y, double z) override;

    //copy constructor for bird
    bird(const bird &b);

    //destructor
    ~bird() override;

    //sleep method for bird
    void sleep() override;

    //eat method for bird
    void eat() override;

    //overload insertion operator for bird
    friend std::ostream &operator<<(std::ostream &os, const bird &obj);
};


#endif //LAB04_BIRD_HPP

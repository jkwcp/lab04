//
// Created by Jackie Wang on 2019-02-07.
//

#ifndef LAB04_ANIMAL_HPP
#define LAB04_ANIMAL_HPP

#include <iostream>

using namespace std;

class animal {
private:
    //age
    int age;

    //ID
    long ID;

    //DOA
    bool alive;

    //location
    pair<double, double> location;

public:
    //used for get unique ID
    static long counter;

    //default constructor
    animal();

    //3 parameters constructor
    animal(int a, double x, double y);

    //move method for animal on land
    virtual void move(double x, double y);

    //move method for flies
    virtual void move(double x, double y, double z);

    //copy constructor
    animal(const animal &a);

    //destructor
    virtual ~animal();

    //sleep method for animal
    virtual void sleep();

    //eat method for animal
    virtual void eat();

    //insertion operator overload
    friend std::ostream &operator<<(std::ostream &os, const animal &obj);

    void setID(long n);

    long getID() const;

    void setage(int n);

    long getage() const;

    void setalive(bool t);

    bool getalive() const;

    void setlocation(pair<double, double> p);

    pair<double, double> getlocation() const;
};


#endif //LAB4_ANIMAL_HPP


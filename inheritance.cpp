//
// Created by Jackie Wang on 2019-02-07.
//

#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {
    animal *a, *b, *c;
    a = new animal();
    b = new bird(20, 7, 1, 9);
    c = new canine(30, 4, 7);
    cout << *a;
    cout << *dynamic_cast<bird *>(b);
    cout << *dynamic_cast<canine *>(c);
    cout << "" << endl;
    a->move(1, 2);
    b->move(3, 4, 5);
    c->move(6, 7);
    cout << *a;
    cout << *dynamic_cast<bird *>(b);
    cout << *dynamic_cast<canine *>(c);
    cout << "" << endl;
    a->sleep();
    b->sleep();
    c->sleep();
    a->eat();
    b->eat();
    c->eat();
    dynamic_cast<canine *>(c)->hunt();

    return 0;
}





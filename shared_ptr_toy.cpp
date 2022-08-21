//
// Created by Sg on 21.08.2022.
//
#include "shared_ptr_toy.h"
#include <iostream>
shared_ptr_toy make_shared_ptr_toy(const string &name) {
    shared_ptr_toy b(name);
    return b;
}
shared_ptr_toy make_shared_ptr_toy(const shared_ptr_toy& myToy)
{
    shared_ptr_toy b(myToy.getName());
    return b;
}
shared_ptr_toy::shared_ptr_toy()
{
    myToy = new Toy();
    counter = new int(1);
    cout << "New link! " << myToy->name << " links count :" << *counter << endl;
}
shared_ptr_toy::shared_ptr_toy(const string &name)
{
    myToy = new Toy(name);
    counter = new int(1);
    cout << "New link! " << myToy->name << " links count :" << *counter << endl;
}
shared_ptr_toy &shared_ptr_toy::operator=(const shared_ptr_toy &myshToy)
{
    if(this == &myshToy)
        return *this;
    if(myToy != nullptr)
    {
        (*counter)--;
        cout << "Delete link! " << myToy->name << " links count :" << *counter << endl;
        if(*counter == 0)
        {
            cout << "Delete toy - " << myToy->name << endl;
            delete myToy;
            delete counter;
        }
    }

    myToy =  myshToy.myToy;
    counter = myshToy.counter;
    (*counter)++;
    cout << "New link! " << myToy->name << " links count :" << *counter << endl;
    return *this;
}
shared_ptr_toy::shared_ptr_toy(const shared_ptr_toy &myshToy)
{
    myToy =  myshToy.myToy;
    counter = myshToy.counter;
    (*counter)++;
    cout << "New link! " << myToy->name << " links count :" << *counter << endl;
}
shared_ptr_toy::~shared_ptr_toy()
{
    (*counter)--;
    cout << "Delete link! " << myToy->name << " links count :" << *counter << endl;
    if(*counter == 0)
    {
        cout << "Delete toy - " << myToy->name << endl;
        delete myToy;
        delete counter;
    }
}
string shared_ptr_toy::getName() const {
    return myToy->name;
}

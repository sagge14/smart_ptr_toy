//
// Created by Sg on 21.08.2022.
//
#include "shared_ptr_toy.h"
#pragma once
class Dog
{
    string name;
    shared_ptr_toy lovelyToy;
public:
    explicit Dog(const class shared_ptr_toy& _myToy) : lovelyToy(_myToy){};
    void setLovelyToy(const class shared_ptr_toy& _myToy) ;
    ~Dog() = default;
};

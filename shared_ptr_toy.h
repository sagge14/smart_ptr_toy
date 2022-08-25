//
// Created by Sg on 21.08.2022.
//
#pragma once
#include <string>
#include "toy.h"
#include <utility>
#include <iostream>
class shared_ptr_toy
{
    int* counter;
    Toy* myToy;
public:

    shared_ptr_toy();
    explicit shared_ptr_toy(const string& name);
    ~shared_ptr_toy();

    shared_ptr_toy& operator=(const shared_ptr_toy& myshToy);
    shared_ptr_toy(const shared_ptr_toy& myshToy);
    string getName() const;
};
shared_ptr_toy make_shared_ptr_toy(const string& name);
shared_ptr_toy make_shared_ptr_toy(const shared_ptr_toy& myToy);

//
// Created by Sg on 16.08.2022.
//
#pragma once
#include <string>
#include <utility>
using namespace std;
class Toy{
public:
    string name;
    explicit Toy(string  _name) :name(std::move(_name)){};
    Toy(const Toy& _toy) : name(_toy.name){};
    Toy() :name("None") {};
    ~Toy() = default;
};

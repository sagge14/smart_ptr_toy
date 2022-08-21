//
// Created by Sg on 21.08.2022.
//

#include "dog.h"

Dog::Dog(const shared_ptr_toy& _myToy) : lovelyToy(_myToy){
    n = new int[]{1,2,3}; // для теста
}
Dog::~Dog() {
    delete[] n;
}
void Dog::setLovelyToy(const shared_ptr_toy& _myToy) {
    lovelyToy = _myToy;
}
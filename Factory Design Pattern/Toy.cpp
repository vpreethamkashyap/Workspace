#include <iostream>
#include "Toy.hpp"

using namespace std;


TOY::TOY(){

	cout<< "Creating TOY object" <<endl;
}


// Forgetting the body of the virtual destructor can create a undefined reference to vtable
TOY::~TOY(){

	cout << "Destructing TOY object" << endl;
}

CAR::CAR(){


}

void CAR::assembleThetoy(){

	cout << "Assembly of the car has begun" << endl;
}

BIKE::BIKE(){


}

void BIKE::assembleThetoy(){

	cout << "Assembly of the bike has begun" << endl;
}

BIKE::~BIKE(){}

#include "Toy.hpp"

#include <iostream>

using namespace std;

int main (int argc, char argv[]){

	TOY *toy;

	int input;

	cout << "Please specify your type of toy" << endl;

	cin >> input;

	switch(input){

	case 0:
	{
		toy = new CAR;
		break;
	}

	case 1:
	{
		toy = new BIKE;
		break;
	}

	}

	toy->assembleThetoy();
	toy->processThetoy();
	toy->paintThetoy();
	toy->testThetoy();


return 0;
}

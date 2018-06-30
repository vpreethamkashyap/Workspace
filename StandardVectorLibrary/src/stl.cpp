#include "../inc/stl.hpp"
#include <iostream>
#include <vector>

using namespace std;

stl::stl(){
	cout << "new instance of stl class constructed" << endl;
}

stl::~stl(){
	cout << "Instance of stl class destructed" << endl;
}

void
stl::dynamic_memory(stl* s){

	s = new stl();

	cout << "$x" << s << endl;
	delete(s);
	s = NULL;
	cout << s << endl;

}

void
stl::vector_example(void){

	vector<string> string;

	string.push_back("one");
	string.push_back("two");
	string.push_back("three");

	for(int i = 0; i< string.size(); i++){

		cout << string[i] << endl;
	}
}

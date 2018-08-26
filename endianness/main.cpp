#include <iostream>

using namespace std;

char IsLittelOrBigEndian(void){

	unsigned int i = 1;

	char* pch = (char*)&i;

	if(*pch){
		return 'L';   //LSB is stored in the first byte order
	}
	else{
		return 'B';   //MSB is stored in the first byte order
	}
}

int main(void){

	char find = ' ';

	find = IsLittelOrBigEndian();

	cout << find <<' ';
}

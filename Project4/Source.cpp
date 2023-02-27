#include <iostream>
#include <string>
using namespace std;
void rand_init(int* array, int size, int bound) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % bound;
	}
}

string convert(int* array, int size, int bound) {
	string msg = "";
	for (int i = 0; i < size; i++) {
		msg += to_string(array[i]) + " ";
	}
	return msg;
}

int main() {


	return 0;
}
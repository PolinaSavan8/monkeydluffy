#include <iostream>
int main2() {
	int a = 7;
	int b = 5;
	int* d = &a;
	int* g = &b;
	std::cout << *d;
	std::cout << *g;

	return 0;
}
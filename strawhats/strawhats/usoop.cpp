#include <iostream>
using namespace std;

int convert_array(int*ptr1, int*ptr2) {
	 *ptr1 = *ptr1 + 1;
	 *ptr2 = *ptr2 + 2;
	int c = *ptr1 + *ptr2;
	return c;
}
int main5() {
	int a;
	int* prt1 = &a;
	int b;
	int* prt2 = &b;
	std::cin >> a; 
	std::cin>> b;
	int d = convert_array(prt1, prt2 );
	std::cout << d << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return 0;
}
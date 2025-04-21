#include <iostream>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main3() {
	int a = 7;
	int b = 5;
	int a1 = 7;
	int b1 = 5;
	int a2 = 7;
	int b2 = 5;
	int a3 = 7;
	int b3 = 5; 
	int a4 = 7;
	int b4 = 5;
	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	swap(&a, &b);
	swap(&a1, &b1);
	swap(&a2, &b2);
	swap(&a3, &b3);
	swap(&a4, &b4);
	return 0;
}
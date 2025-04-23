#include <iostream>
using namespace std;

int task1(int *ptr) {
	int a = *ptr * *ptr;
	return a;
}
int main() {
	int a;
	int* ptr = &a;
	std::cin >> a;
	int result = task1(ptr);
	std::cout << result << std::endl;
}
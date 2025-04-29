#include <iostream>
using namespace std;
 
int push(int article) {
	int arr[4];
	int* arr = new int(4);
	int* arr = new int(4 + 1);
	return article;
}

[4]
[4,5]
[4, 5, 3]
[4, 5, 3,6]
[4, 5, 3,6,7]
[4, 5, 3, 6, 7,9]

int main() {
	int* arr = nullptr;
	push(4);
		push(5);
		push(3);
		push(6);
		push(7);
		push(9);
}
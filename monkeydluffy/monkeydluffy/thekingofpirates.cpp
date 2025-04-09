#include <iostream>
int main() {
	int n = 5;
	std::cin >> n;
	int* arr = new int(n);
	int* urr = new int(n);
	for (int i = 0; i < n; i++) {
		 std::cin >> arr[i];
		
	}
	for (int i = 0; i < n; i++) {
		std::cin >> urr[i];
	}
	
	for (int i = 0; i < n; i++) {
		int sum = arr[i] + urr[i];
		std::cout << sum << std::endl;
	}
	return 0;
}
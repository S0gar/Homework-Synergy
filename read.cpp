#include <vector>
#include <iostream>

int size;

void read(std::vector<int>& vec) {
	std::cout << "введите размер вектора: ";
	std::cin >> size;
	std::cout << "\n введите числа: ";
	for (int i = 0; i < size; i++) {
		int el;
		std::cin >> el;
		vec.push_back(el);
	}
}
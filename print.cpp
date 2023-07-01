#include <vector>
#include <iostream>

void print(const std::vector<int>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec.at(i) << " ";
	}
}
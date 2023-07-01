#include <algorithm>
#include <iostream>    
#include "inout.h"

int main() {
    setlocale(LC_ALL, "Russian");
    std::vector<int> vec;
    read(vec);
    std::sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}
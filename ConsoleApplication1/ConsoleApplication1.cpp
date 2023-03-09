#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;

    for (int i = 1; i <= 5; i++) {
        arr.push_back(i);
    }

    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << "\n";
    }

    return 0;
}

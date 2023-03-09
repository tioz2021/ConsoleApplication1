#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;

    for (int i = 1; i <= 5; i++) {
        arr.push_back(i);
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "\n";
    }

    // base types
    int test = 10;
    long testl = 10000;
    float testF = 10;
    char c = 'c';
    bool b = false;

    // array
    int arr[3] = { 1,2,3 };
    vector<int> d_arr; // dynamic array need add #include <vector>

		// array method 
		d_arr.push_back(10);
		d_arr.size();

    // string
    string str = "string";

    // flow conroll
    if (true) {

    }
    else if(false) {

    }
    else {

    }

    while (true) {

    }

    do {

    } while (true);

    for (int i = 0; i < 10; i++) {

    }



    return 0;
}

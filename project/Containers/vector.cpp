#include <iostream>
#include <vector>
#include <exception>

using namespace std;

template<typename T>
void printVector(const vector<T>& vec) {
    cout << "used: " << vec.size() << " / " << vec.capacity() << " max_size: " << vec.max_size() << endl;
    for (const T& t : vec) {
        cout << t << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers;
    vector<string> strings {"Hello", "How", "are", "you", "doing", "?"};

    numbers.push_back(100);
    numbers.push_back(200);
    numbers.push_back(32);

    printVector(numbers);
    printVector(strings);

    strings.resize(3);
    printVector(strings);
    strings.resize(10, "XXXX");
    printVector(strings);

    numbers[0] = 43;
    numbers.push_back(400);
    numbers.push_back(500);
    printVector(numbers);

    for (int* p = &numbers[0]; p < (&numbers[0] + numbers.size()); ++p) {
        cout << *p << endl;
    }

    //Bad access
    cout << numbers[10] << endl;

    try {
        cout << numbers.at(10) << endl;
    } catch(std::out_of_range& e) {
        cerr << e.what() << endl;
    }
    return 0;
}

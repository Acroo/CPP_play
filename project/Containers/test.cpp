#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include "circular_buffer.hpp"

using namespace std;

int main() {
    CircularBuffer<int, 7> buffer;
    cout << "Buffer size: " << buffer.size() << endl;

    auto bufInsert = back_insert_iterator<CircularBuffer<int, 7>>(buffer);

    for(int i = 0; i < 13; i++) {
        *bufInsert = i * 10;
    }

    cout << "Buffer size now: " << buffer.size() << endl;

    copy(begin(buffer), end(buffer), ostream_iterator<int>(cout, " "));
    cout << endl;

    while(!buffer.empty()) {
        cout << "popping: " << buffer.head() << endl;
        buffer.pop();
    }

/**    CircularBuffer<int, 10> buf;

    for(int i = 0;i < 130; i++) {
        buf.push_back(i);
    }

    while(!buf.empty()) {
        cout << "popping: " << buf.head() << endl;
        buf.pop();
    }
**/
    return 0;
}

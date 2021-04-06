#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> mylist {10,20,25,30,40,50};
    list<int> other {35,25,15,45,50,55};

    mylist.merge(other);

    cout << "list size = " << mylist.size() << endl;
    cout << "other size = " << other.size() << endl;

    for(auto i = mylist.begin();i != mylist.end();++i) {
        cout << *i << " ";
    }

    cout << endl;

    mylist.unique();
    for(auto i = mylist.begin();i != mylist.end();++i) {
        cout << *i << " ";
    }

    return 0;
}

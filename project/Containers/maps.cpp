#include <iostream>
#include <map>

using namespace std;
struct SimpleObject {
    int x;
    int y;
    std::string z;

    SimpleObject() : x(1), y(2), z("stuff") {
    }

    SimpleObject(int x, int y, const std::string& z) :
    x(x), y(y), z(z) {

    }
};

int main() {
    map<string, SimpleObject> objectMap;
    // Insert some elements
    objectMap.insert(pair<string, SimpleObject>("first", SimpleObject(4,8,"Hello")));
    objectMap["second"] = SimpleObject();
    objectMap["second"] = SimpleObject(0,0,"Overwritten");
    objectMap["third"] = SimpleObject(1,6,"World");
    objectMap.insert({"fourth", SimpleObject(1,1,"number 4")});

    const auto [iterator, inserted] = objectMap. insert({"third", SimpleObject()});
    if(inserted) {
        cout << "Item inserted" << endl;
    } else {
        cout << "Key " << iterator->first << " exists, not inserted" << endl;
    }

    for(auto& x : objectMap) {
        cout << x.first << " -> " << x.second.z << endl;
    }

    objectMap.erase("second");
    objectMap.erase("third");

    auto ptr = objectMap.find("third");
    if(ptr == objectMap.end()) {
        cout << "Unable to find third" << endl;
    } else {
        cout << "found the key: " << ptr->first << endl;
    }

    objectMap.clear();
    cout << "The objectMap is now " << objectMap.size() << endl;
    return 0;
}

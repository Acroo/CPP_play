//
//  main.cpp
//  HelloWorld
//
//  Created by Christian Holmqvist on 2020-03-14.
//  Copyright © 2020 Christian Holmqvist. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string doSpace() {
    return " ";
}

int main(int argc, const char * argv[]) {
    vector<string> msg {"Hello", "World", "from", "XCode", "2020"};

    for ( string word : msg) {
        cout << word << doSpace();
    }
    cout << endl;
    return 0;
}

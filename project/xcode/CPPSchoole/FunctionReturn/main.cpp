//
//  main.cpp
//  FunctionReturn
//
//  Created by Christian Holmqvist on 2020-03-15.
//  Copyright © 2020 Christian Holmqvist. All rights reserved.
//

#include <iostream>

int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    return num;
}

void print(int x, int y) {
    std::cout << x << " + " << y << " = " << x+y << std::endl;
}

int doubleNumber(int x){
    return x * 2;
}

int main() {
    
    //print the sum
    int x{};
    std::cin >> x;
    std::cout << doubleNumber(x) << std::endl;
    //print(getValueFromUser(), getValueFromUser());
    
    return 0;
}

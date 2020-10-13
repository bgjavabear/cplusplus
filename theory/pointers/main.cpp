//
// Created by Александр Киселев on 13.10.2020.
//

#include <iostream>

using namespace std;

int main() {
    int ival = 42;
    int *p = &ival; // p holds the address of ival; p is a pointer to ival

    cout << *p << endl;
}
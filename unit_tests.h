#include <iostream>
#include <string>
#include <cassert>
using namespace std;

void test_print() {
    cout << "first line" << endl;
    cout << "second line" << endl;
    cout << "third line" << endl;
}

void test_input() {
    int value;
    cin >> value;
    assert(value == 3);
}

void test_input_and_output(){
    string name;
    cin >> name;
    cout << name << endl;
}
#include <iostream>

#include "CircularBuffer.h"
#include "Stack.h"
#include "Queue.h"

using namespace std;

void test_queue();
void test_stack();

int main() {
    test_queue();
    cout << "\n\n\n\n";
    test_stack();
}

void test_queue() {
    /*  Construct a queue, and populate with elements in order */
    cout << "Inserting the letters A-F in order " << endl;
    Queue queue;
    for (int index = 0; index < 6; index++) {
        char c = 'A' + index;
        string s;
        s = c;
        
        cout << c << ", ";
        queue.enqueue(s);
    }

    cout << "\n - - - - - - - printing queue - - - - - - - - -" << endl;
    queue.printQueue();
    cout << " - - - - removing first, then printing - - - - -" << endl;
    for (int index = 0; index < 6; index++) {
        cout << "~~~~~~" << endl;
        queue.dequeue();
        queue.printQueue();
    }
}


void test_stack() {
    /*  Construct a queue, and populate with elements in order */
    cout << "Inserting the letters A-F in order " << endl;
    Stack stack;
    for (int index = 0; index < 6; index++) {
        char c = 'A' + index;
        string s;
        s = c;
        
        cout << c << ", ";
        stack.push(s);
    }

    cout << "\n - - - - - - - printing stack - - - - - - - - -" << endl;
    stack.printStack();
    cout << " - - - - removing top, then printing - - - - -" << endl;
    for (int index = 0; index < 6; index++) {
        cout << "~~~~~~" << endl;
        stack.pop();
        stack.printStack();
    }
}
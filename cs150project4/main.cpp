#include <iostream>
#include<stack>
#include "EvenStack.h"

using namespace std;

int main()
{
    EvenStack myStack;
    myStack.push(44);
    myStack.push(66);
    myStack.push(99);
    myStack.push(88);
    myStack.pop();
    myStack.emptyStack();


    stack<int> inputStack;
    inputStack.push(2);
    inputStack.push(9);
    inputStack.push(6);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(5);
    inputStack.push(4);

    EvenStack newStack;
    newStack.push(32);
    newStack.getEvenNumbers(inputStack);

    cout << "inputStack has " << inputStack.size() << " elements" << endl;
    cout << "myStack has " << myStack.size() << " elements" << endl;
    cout << "newStack has " << newStack.size() << " elements" << endl;

    cout << endl;
    while (!newStack.stackEmpty()){
        cout << newStack.top() << " ";
        newStack.pop();
    }
    cout << endl;


    return 0;
}

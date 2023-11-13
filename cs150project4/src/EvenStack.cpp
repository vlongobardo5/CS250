#include "EvenStack.h"
#include <stack>
#include <iostream>
using namespace std;

EvenStack::EvenStack()
{


}

bool EvenStack::stackEmpty()  {
    return stack.empty();
}
int EvenStack::size()
{
    return stack.size();
}
int EvenStack::top()
{
    if (!stack.empty()){
        return stack.top();
    }

}

void EvenStack::push(int value)
{
   if (value % 2 == 0){
    stack.push(value);
   }
   else {
    cout << "Error: can only push even numbers" << endl;
   }
}
void EvenStack::pop()
{
    if (!stack.empty()) {
        stack.pop();
    }

}

void EvenStack::getEvenNumbers(std::stack<int>& inputStack)
{
    while (!inputStack.empty()){
        int topValue = inputStack.top();
        inputStack.pop();
        if (topValue % 2 == 0) {
            stack.push(topValue);
        }
    }
}

void EvenStack::emptyStack(){
    while (!stack.empty()){
        cout << top() <<  " ";
        pop();
    }
    cout << endl;

}

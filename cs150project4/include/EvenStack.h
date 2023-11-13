#ifndef EVENSTACK_H
#define EVENSTACK_H
#include <stack>
#include <iostream>
using namespace std;


class EvenStack
{
    public:
        EvenStack();
        bool stackEmpty();
        int size();
        int top();
        void push(int);
        void pop();
        void getEvenNumbers(std::stack<int>& inputStack);
        void emptyStack();



    protected:

    private:
        std::stack<int> stack;
};

#endif // EVENSTACK_H

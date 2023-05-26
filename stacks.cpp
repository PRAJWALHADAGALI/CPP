#include <iostream>
using namespace std;

#define size 5

class stack 
{
    int stack[size]; 
    int tos;

public:
    void init();
    void push(int i);
    int pop();
};
void stack::init() 
{
    tos = 0;
}

void stack ::push(int i)
{
    cout << "enter the value: \n";
    cin >> i; // value is asked
    if (tos == size)
    {
        cout << "stacks is full. \n";
        return;
    }
    stack[tos] = i;
    tos++;
    cout << "element is pushed\n";
}
int stack::pop() 
{
    if (tos == 0)
    {
        cout << "stack is empty. \n";
        return 0;
    }
    tos--;
    cout << "the element popped is: \n";
    return stack[tos]; 
}

int main() 
{
    int i;
    stack stack1, stack2;
    stack1.init();
    stack2.init();
    stack1.push(i); 
    stack2.push(i); 
    stack1.push(i);
    stack2.push(i);
    cout << stack1.pop() << "\n"; 
    cout << stack2.pop() << "\n"; 
    return 0;
}
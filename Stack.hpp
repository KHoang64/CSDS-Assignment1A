#ifndef STACK_HPP
#define STACK_HPP

class Stack
{
private:
    static const int SIZE = 6; // Fixed size of the stack
    char data[SIZE];           // Array to store stack elements
    int top;                   // Index of the top element

public:
    Stack();               // Constructor to initialize the stack
    bool push(char value); // Push an element onto the stack
    char pop();            // Pop an element from the stack
    bool isEmpty() const;  // Check if the stack is empty
    bool isFull() const;   // Check if the stack is full
};

#endif

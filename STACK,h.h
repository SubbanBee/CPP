#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

#define MAX 100

struct Stack {
    int stack[MAX];
    int top = -1;
    int size = 0;

    void push(int val) {
        if (top == MAX - 1) {
            cout << "The stack is full" << endl;
            return;
        }
        stack[++top] = val;
        size++;
    }

    void pop() {
        if (top == -1) {
            cout << "The stack is empty" << endl;
            return;
        }
        cout << "The removed element is : " << stack[top--] << endl;
        size--;
    }

    void get_top() {
        if (top == -1) {
            cout << "The stack is empty" << endl;
            return;
        }
        cout << "The top element is: " << stack[top] << endl;
    }

    void get_size() {
        cout << "The size of stack: " << size << endl;
    }
};

#endif
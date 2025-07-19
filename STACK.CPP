#include "STACK,h.h"
#include <iostream>
using namespace std;

int main() {
    Stack stack;
    int choice, value;

    while (true) {
        cout << "\n Stack Operations:-\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Get Top\n";
        cout << "4. Get Size\n";
        cout << "5. Exit\n";
        cout << "Enter your choice:- ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push:- ";
                cin >> value;
                stack.push(value);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                stack.get_top();
                break;

            case 4:
                stack.get_size();
                break;

            case 5:
                cout << "Exiting program\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
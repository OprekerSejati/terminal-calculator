#include <iostream>  
using namespace std;  
  
// Function prototypes  
void showMenu();  
double add(double a, double b);  
double subtract(double a, double b);  
double multiply(double a, double b);  
double divide(double a, double b);  
  
int main() {  
    int choice;  
    double num1, num2;  
  
    do {  
        showMenu();  
        cout << "Enter your choice (1-5): ";  
        cin >> choice;  
  
        if (choice >= 1 && choice <= 4) {  
            cout << "Enter two numbers: ";  
            cin >> num1 >> num2;  
        }  
  
        switch (choice) {  
            case 1:  
                cout << "Result: " << add(num1, num2) << endl;  
                break;  
            case 2:  
                cout << "Result: " << subtract(num1, num2) << endl;  
                break;  
            case 3:  
                cout << "Result: " << multiply(num1, num2) << endl;  
                break;  
            case 4:  
                if (num2 != 0) {  
                    cout << "Result: " << divide(num1, num2) << endl;  
                } else {  
                    cout << "Error: Division by zero!" << endl;  
                }  
                break;  
            case 5:  
                cout << "Exiting the calculator. Goodbye!" << endl;  
                break;  
            default:  
                cout << "Invalid choice. Please try again." << endl;  
        }  
        cout << endl;  
    } while (choice != 5);  
  
    return 0;  
}  
  
// Function definitions  
void showMenu() {  
    cout << "Simple Calculator" << endl;  
    cout << "1. Add" << endl;  
    cout << "2. Subtract" << endl;  
    cout << "3. Multiply" << endl;  
    cout << "4. Divide" << endl;  
    cout << "5. Exit" << endl;  
}  
  
double add(double a, double b) {  
    return a + b;  
}  
  
double subtract(double a, double b) {  
    return a - b;  
}  
  
double multiply(double a, double b) {  
    return a * b;  
}  
  
double divide(double a, double b) {  
    return a / b;  
}  

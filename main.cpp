#include <iostream>
using namespace std;

int main() {
    char choice, continueOption;
    int num1, num2;

    do {
        cout << "Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your choice: ";
        cin >> choice;

        cout << "Enter two integers: ";
        cin >> num1 >> num2;

        switch(choice) {
            case '1':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '2':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '3':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '4':
                if (num2 == 0) {
                    cout << "The second integer is zero, divide by zero" << endl;
                } else {
                    cout << "Result: " << num1 / num2 << endl;
                }
                break;
            default:
                cout << "Invalid choice! Please choose again." << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> continueOption;

    } while (continueOption == 'y' || continueOption == 'Y');

    cout << "Exiting program. Goodbye!" << endl;
    return 0;
}

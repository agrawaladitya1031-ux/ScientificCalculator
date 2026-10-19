
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n=== Scientific Calculator ===\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n";
        cout << "4. Divide\n5. Power\n6. Square Root\n";
        cout << "7. Sine (degrees)\n8. Cosine (degrees)\n";
        cout << "9. Exit\nChoice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1: cout << "Result: " << a + b << endl; break;
            case 2: cout << "Result: " << a - b << endl; break;
            case 3: cout << "Result: " << a * b << endl; break;
            case 4:
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Cannot divide by zero.\n";
                break;
            case 5: cout << "Result: " << pow(a, b) << endl; break;
            case 6:
                cout << "Enter number: ";
                cin >> a;
                if (a >= 0) cout << "Result: " << sqrt(a) << endl;
                else cout << "Negative input not supported.\n";
                break;
            case 7:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result: " << sin(a * acos(-1) / 180) << endl;
                break;
            case 8:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result: " << cos(a * acos(-1) / 180) << endl;
                break;
            case 9: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 9);

    return 0;
}

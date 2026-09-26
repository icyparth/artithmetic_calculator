#include <iostream>
using namespace std;

    float add(float a, float b){
        float c = a + b;
        cout << "The sum of " << a << " and " << b << " is: " << c << endl;
        return c;
    }

    float subtract(float a, float b){
        float c = a - b;
        cout << "The difference of " << a << " and " << b << " is: " << c << endl;
        return c;
    }

    float multiply(float a, float b){
        float c = a * b;
        cout << "The product of " << a << " and " << b << " is: " << c << endl;
        return c;
    }

    float divide(float a, float b){
        float c = a / b;
        if(b == 0){
            cout << "Error: Division by zero!" << endl;
            return a;
        }
        cout << "The answer of " << a << " and " << b << " is: " << c << endl;
        return c;
    }

int main(){
    float num1, num2;
    char operation;
    char choice;
    choice = 'y';
    cout << "Welcome to the Arithmetic Calculator!" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    while(choice == 'y' || choice == 'Y'){
        cout << "Choose an operation (+, -, *, /): e.g. + for addition, - for subtraction, * for multiplication, / for division: ";
        cin >> operation;
        cout << "Enter the other number: ";
        cin >> num2;
        
    if(operation == '+'){
        num1 = add(num1, num2);
    } else if (operation == '-'){
        num1 = subtract(num1, num2);
    } else if (operation == '*'){
        num1 = multiply(num1, num2);
    } else if (operation == '/'){
        num1 = divide(num1, num2);
    } else {
        cout << "Invalid operation!" << endl;
    }
    cout << "Do you want to perform another calculation? (y/n): ";
    cin >> choice;
    if(choice != 'y' && choice != 'Y'){
        cout << "Thank you for using the Arithmetic Calculator!" << endl;
        break;
    }
}
return 0;
}
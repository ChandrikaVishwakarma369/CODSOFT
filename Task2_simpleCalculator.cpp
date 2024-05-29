//Simple Calculator
#include<iostream>
using namespace std;
int main() {
    double number1 , number2 ;
    char op;
    cout << endl << "     Simple Calculator of basic Arithmatic operation!     " << endl;
    cout << endl << " Enter the First Number: ";
    cin >> number1;
    cout << " Enter the Second Number: ";
    cin >> number2;
    cout << endl << " Select an operation  ->  + , - , * , / : ";
    cin >> op;

    switch (op) {
        case '+': cout << endl << " Addition of Two Number is : " << number1 + number2 << endl;
                break;
        case '-': cout << endl << " Subtraction of Two Number is : " << number1 - number2 << endl;
                break;
        case '*':  cout << endl<< " Multiplication of Two Number is : " << number1 * number2 << endl;
                break;
        case '/': if (number2 == 0) {
                cout << " Incorrect, Because Division by 0 is Not Allowed " <<  endl <<" Try Again " ;
                } 
                else {
                cout << endl << " Division of Two Number is : " << number1 / number2 << endl;
                }
                break;
        default:
            cout << " You Can Select Only One of These Operators -> + , - , * , / " << endl<< " Try Again.... ";
    }

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    for(int i=0; i<90 ;i++) {
        cout<<"*";
    }
    cout<<endl;
    cout<<"  CALCULATOR"<<endl;
    for(int i=0;i<90;i++) {
        cout << "*";
    }
    cout<<endl;
    cout<<"1:Addition"<<endl;
    cout<<"2:Subtraction"<<endl;
    cout<<"3:Multiplication"<<endl;
    cout<<"4:Division"<<endl;
    cout<<"5:Square"<<endl;
    cout<<"6:Square Root"<<endl;
    cout<<"7:Modulus"<<endl;
    cout<<"8:Power"<<endl;
    cout<<"9:sine"<<endl;
    cout<<"10:Cosine"<<endl;
    cout<<"11:log"<<endl;
    cout<<"12:Tangent"<<endl;
    cout<<"13:Cotangent"<<endl;
    cout<<"14:inverse Sine"<<endl;
    cout<<"15:inverse Cosine"<<endl;
    char choice;
    choose:
    {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case '1':
                // Declare variables
                cout << "Addition" << endl;
                int num1, num2, num3, sum;
                //Prompt the user to enter two numbers
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                //Calculate the sum
                sum = num1 + num2;
                cout << sum << endl;
                goto choose;
            case '2':
                cout << "Subtraction" << endl;
                int sub;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the thr second number: ";
                cin >> num2;
                //calculate the different
                sub = num1 - num2;
                cout << sub << endl;
                goto choose;
            case '3':
                int mul;
                cout << "Multiplication" << endl;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                //calculate the Multiplication;
                mul = num1 * num2;
                cout << mul << endl;
                goto choose;
            case '4':
                cout << "Division" << endl;
                int div;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                //calculate the division
                div = num1 / num2;
                cout << div;
                goto choose;
            case '5':
                cout << "Square" << endl;
                int sq;
                cout << "Enter the number: ";
                cin >> num1;
                //calculate the square
                sq = num1 * num1;
                cout << sq;
                goto choose;
            case '6':
                cout << "Square Root" << endl;
                float sqr;
                cout << "Enter the number: ";
                cin >> num3;
                //calculate the square root
                sqr = sqrt(num3);
                cout << sqr << endl;
                goto choose;
            case '7':
                cout << "Modulus";
                int mod;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number:";
                cin >> num2;
                mod = num1 % num2;
                cout << mod << endl;
                goto choose;
            case '8':
                int result;
                cout << "Power ";
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                //calculate the power
                result = pow(num1, num2);
                cout << result << endl;
                goto choose;
            case '9':

                cout << "Sine";
                double result1, angle;

                cout << "Enter the angle:";
                cin >> angle;
                //convert angle to a double
                angle = double(angle);
                //calculate the sine
                result1 = sin(angle * M_PI / 180); // convert angle to radians
                cout << result1 << endl;
                goto choose;
            case '10':
                cout << "Cosine";
                double result2, angle2;
                cout << "Enter the angle in degrees: ";
                cin >> angle2;
                result2 = cos(angle2 * M_PI / 180); // convert angle to radians before calculating cosine
                cout << "Cosine of " << angle2 << " degrees is: " << result2 << endl;
                break;
            case '11':
                cout << "Logarithm";
                double num4, result3;
                cout << "Enter a number: ";
                cin >> num4;
                result3 = log(num4); // natural logarithm
                cout << "Natural logarithm of " << num4 << " is: " << result3 << endl;
                goto choose;
            case '12':
                cout << "Tangent";
                double result4, angle3;
                cout << "Enter the angle in degrees: ";
                cin >> angle3;
                result4 = tan(angle3 * M_PI / 180); // convert angle to radians before calculating tangent
                cout << "Tangent of " << angle3 << " degrees is: " << result4 << endl;
                goto choose;
            case '13':
                cout << "Cotangent";
                double result5, angle4;
                cout << "Enter the angle in degrees: ";
                cin >> angle4;
                result5 = 1 / tan(angle4 * M_PI / 180); // cotangent is the reciprocal of tangent
                cout << "Cotangent of " << angle4 << " degrees is: " << result5 << endl;
                goto choose;
            case '14':
                cout << "Inverse Sine";
                double result6, value;
                cout << "Enter a value between -1 and 1: ";
                cin >> value;
                result6 = asin(value) * 180 / M_PI; // calculate inverse sine in degrees
                cout << "Inverse Sine of " << value << " is: " << result6 << " degrees" << endl;
            case '15':
                cout << "Inverse Cosine";
                double result7, value2;
                cout << "Enter a value between -1 and 1: ";
                cin >> value2;
                result7 = acos(value2) * 180 / M_PI; // calculate inverse cosine in degrees
                cout << "Inverse Cosine of " << value2 << " is: " << result7 << " degrees" << endl;

                goto choose;
            default:
                cout<<"User input is not vlaid pleaase enter a choice value number between 1 and 15 ";
                goto choose;






        }

    }


    return 0;
}

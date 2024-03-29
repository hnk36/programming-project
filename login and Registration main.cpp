
/*
    Registration and Login Project
    ------------------------------
    This project implements a simple registration and login system in C++.
    Users can create a new account with a username and password, and then log in with their credentials.

    Please note that this is a basic implementation and is not suitable for real-world applications.
    In a real-world application, you would need to implement more advanced features such as password encryption,
    input validation, and a database to store user information.
    */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Registration {
    string username;
    string password;
    string id;
};

int main() {
    //In the main function, an instance of Registration is created to store the user's registration details.

    Registration reg;// This creates an instance of the Registration struct. This struct has three members: username, password, and id. These will hold the user's registration details.
    string username;// This creates an instance of the Registration struct. This struct has three members: username, password, and id. These will hold the user's registration details.
    string password;//This variable is used to temporarily store the password input by the user.
    string id;//This variable is used to temporarily store the ID input by the user during registration.
    string Id;// This variable is used to temporarily store the ID input by the user when they are trying to recover their password.

    cout<<setw(20)<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<setw(70)<<"Welocome to login and Redistration program"<<endl;
    cout<<setw(20)<<"-------------------------------------------------------------------------------------------------------"<<endl;
    home: // loop used to back mean choice or option
    cout << setw(48)<<"1) Registration" << endl;
    cout << setw(41)<<"2) Login" << endl;
    cout << setw(63)<<"3) if you forgot your PASSWORD" << endl;
    cout << setw(40)<<"4) Exit" << endl;
cout<<endl;
    char choice;//This variable is used to store the user's choice from the main menu.
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore(); // Clear the newline character from the input stream
    switch (choice) {
        case '1':
            cout << "Welcome to registration" << endl;
            cout << "Enter username: ";
            getline(cin, username);
            reg.username = username;
            cout << "Enter password: ";
            getline(cin, password);
            reg.password = password;
            cout<<"Enter your Id number: ";
            getline(cin,reg.id);
            id=reg.id;
            cout << "Registration is successful." << endl;
            goto home;
        case '2':
            cout << "Login" << endl;
            cout << "Enter username: ";
            getline(cin, username);
            cout << "Enter password: ";
            getline(cin, password);
            if (username == reg.username && password == reg.password) {
                cout << "Login is successful." << endl;
            } else {
                cout << "Login is unsuccessful." << endl;
                cout << "Please try again late by check username." << endl;
            }
            goto home;
        case '3':
            while (true) {
                cout << "you forgot password? no worries"<<endl;
                cout << "press 1 to search your password by username and id."<<endl;
                cout << "press 2 to go to the main menu"<<endl;
                char choice1;// This variable is used to store the user's choice from the password recovery menu.
                cin >> choice1;
                cin.ignore();
                switch (choice1) {
                    case '1':
                        cout << "Enter username:";
                        getline(cin, reg.username);
                        cout << "Enter your id: ";
                        getline(cin, Id);
                        if (id == Id && username == reg.username) {
                            cout << "your account are found!" << endl;
                            cout << "your password is:" << password << endl;
                        } else {
                            cout << "your account are not found!" << endl;
                        }
                        break;
                    case '2':
                        goto home;
                    default:
                        cout << "invalid password" << endl;

                }
            }
            goto home;
        case '4':
            cout << "Thank for use my progarme" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            goto home;
    }

    return 0;
}





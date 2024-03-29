#include <iostream>
using namespace std;

int main(){
    /*my project is simple bank management system */
    string name,password;
    string name_store={"0"};
    int account;
    double balance,deposit,withDraw;
    int BigBalance[1]={0};
    int Big_deposit[1]={0};
    int store=0;
    string store1={"0"};
    home:
    cout<<"---BANK MANAGEMENT SYSTEM-----  "<<endl;
    cout<<"1)Add Account"<<endl;
    cout<<"2)Deposit"<<endl;
    cout<<"3)Withdraw"<<endl;
    cout<<"4)Search Account"<<endl;
    cout<<"5)Exit"<<endl;
    char choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case '1':
            add:
            cout<<"Enter your account number:";
            cin>>account;
            cout << "Enter your password:";
            cin >> password;
            store1=password;
            if(account!=store) {
                if(store1==password) {
                    store = account;
                    cout << "Enter your name:";
                    cin >> name;
                    name_store=name;
                    cout << "Enter your balance:";
                    cin >> balance;
                    cout << "add account successfully" << endl;
                    BigBalance[1] = balance;
                }
                else {
                    cout << "wrong password" << endl;
                    goto add;
                }
            }
            else{
                cout << "account already exist";
            }
            goto home;
            case '2':
                deposit:
                cout<<"Enter your account number:";
                cin>>account;
                if(store==account) {
                    cout << "Enter your password:";
                    cin >> password;
                    if(password==store1) {
                        cout << "Enter your name:";
                        cin >> name;
                        cout << "Enter you want to deposit money amount: ";
                        cin >> deposit;
                        cout << "The deposit successfully completed and you was deposit" << deposit << endl;
                        Big_deposit[1] = deposit + BigBalance[1];
                        cout << "your total balance is " << Big_deposit[1] << endl;
                    }
                    else {
                        cout << "wrong password" << endl;
                        goto deposit;
                    }
                }
                else{
                    cout<<"account not found"<<endl;
                }
                     goto home;
                    case '3':
                        withdraw:
                        cout<<"Enter your account number:";
            cin>>account;
            cout << "Enter your name:";
            cin >> name;
            cout << "Enter your password:";
            cin >> password;
            if(store==account&&store1==password) {
                cout<<"Enter amount of  you want withdraw :";
                cin>>withDraw;
                if(withDraw<Big_deposit[1]) {
                    cout << "withdraw is" << deposit;
                    Big_deposit[1]-=withDraw;
                    cout << "your total balance is " << Big_deposit[1]<<endl;
                }
            }
            else{
                cout<<"account not found or your input password is invalid"<<endl;
                goto withdraw;
            }
                   goto home;
        case'4':
            search:
            cout<<"Enter account number: ";
            cin>>account;
            if(store==account){
                cout<<"Name: "<<name_store<<endl;
                cout<<"Balance: "<<Big_deposit[1]<<endl;
                cout<<"account number: "<<account<<endl;
            }
      else{
         cout<<"account not found try to add Account"<<endl;
         goto search;
           }
      goto home;
      case'5':
          cout<<"Thank you for using our bank programming: ";
          break;
          default:
            cout<<"Wrong choice please try again "<<endl;
    }

    return 0;
}

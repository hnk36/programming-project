/*Address Book: Create a class for Contact with attributes like name,
 * phone number, and address. Use a vector to store and manage a list of contacts.
*/
#include <iostream>
#include<map>
#include<iomanip>
using namespace std;
map<string, string>contact;
void option(){
    cout<<"1)Add contact"<<endl;
    cout<<"2)View contact"<<endl;
    cout<<"3)Delete contact"<<endl;
    cout<<"4)Search contact"<<endl;
    cout<<"5)Exit to program"<<endl;
}
void AddContact(){
    string name,phone;
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter phone number: ";
    cin>>phone;
    contact[name]=phone;
    cout<<name<<" successfully added"<<endl;
}
void ViewContact() {

    for (auto value: contact) {
        cout<<setw(15)<<"Name: "<<value.first<<endl;
        cout<<setw(17)<<"PHONE: "<<value.second<<endl;
    }
}
void DeleteContact(){
    string name;
    cout<<"Enter name: ";
    getline(cin,name);
    contact.erase(name);
    cout<<name<<" successfully deleted"<<endl;
}

void SearchContact(){
    string name;
    cout<<"Enter name: ";
    getline(cin,name);
    if(contact.find(name)!=contact.end()){
        cout<<setw(20)<<"Contact: "<<contact[name]<<endl;
    }
else{
    cout<<"can not found contact"<<endl;
}
}

int main(){
    while(true){
    option();
    char choice;
    cout<<"Enter choice: ";
    cin>>choice;
    cin.ignore();
    switch(choice){
        case '1':
            AddContact();
            break;
        case '2':
            ViewContact();
            break;
            case '3':
                DeleteContact();
            break;
        case '4':
            SearchContact();
    case '5':
        exit(0);
        default:
            cout<<"Invalid choice: "<<endl;
    }

    }

    return 0;
}







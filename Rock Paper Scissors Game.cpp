#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int user_choice=0;
    int computer_choice=0;
    cout<<"1)rock";
    cout<<"\n2)paper";
    cout<<"\n3)scissors";
    cout<<"\n4)Exit";
    home:
    cout<<"\nEnter your choice: ";
    cin>>user_choice;
    cin.ignore();
   if(user_choice==1){
       cout<<"user choice is rock"<<endl;
   }
   else if(user_choice==2){
       cout<<"user choice is paper"<<endl;
   }
   else{
       cout<<"user choice is scissors"<<endl;
   }
   computer_choice=rand()%3 +1;
   if(computer_choice==1){
       cout<<"computer choice is rock"<<endl;
   }
   else if(computer_choice==2){
       cout<<"computer choice is paper"<<endl;
   }
   else{
       cout<<"computer choice is scissors"<<endl;
   }
// choose the win
if(user_choice==1){
    if(computer_choice==1){
        cout<<"No winner"<<endl;
    }
    else if(computer_choice==2){
        cout<<"you lose"<<endl;
    }
    else {
       cout<<"you win"<<endl;
    }
}
else if(user_choice==2){
    if(computer_choice==1){
        cout<<"you win"<<endl;
    }
    else if(computer_choice==2){
        cout<<"No winner"<<endl;
    }
    else {
        cout<<"you lose";
    }
}
else if(user_choice==3) {
    if (computer_choice == 1) {
        cout << "you lose" << endl;
    }
    else if (computer_choice == 2) {
        cout << "you win" << endl;
    }
    else {
        cout << "No winner" << endl;
    }
}
else if(user_choice==4) {
    exit(0);
}
else{
    cout<<"invalid choose pleas try agin";
    cout<<"correct choose number is 1 to 3";
}

goto home;
    return 0;
}

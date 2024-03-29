/* my projets is guessing.   guessing game is a type of game where players are
 * required to guess something, such as a word, a phrase, a number, or a logical sequence.
 * The specifics of the game can vary widely.*/
#include <iostream>
using namespace std;
int main() {
    int choose,target=5;
    game:
    cout << "Enter a number between 1 and 9: ";
    cin>>choose;
    if(choose>=1&&choose<=9) {
        if (choose == target) {
            cout << "Congratulations! You have guessed the correct number!" << endl;
            char y ;
            cout << "Do you want play again?[Y|N]" << endl;
            cin >> y;
            if (y == 'y' || y == 'Y') {
                cout << "----------------------------------------------------------------------------------"<<endl;
                goto game;

            }
        }
        else{
            cout<<"you have guessed the wrong number please try again"<<endl;
            goto game;
        }
        }
        else {
            cout << "please  a number between 1 and 9 "<<endl;
            goto game;
        }

    return 0;
}

#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    do{  

        player = getUserChoice();
        cout << "Your choice: ";
        showChoice(player);

        computer = getComputerChoice();
        cout << "Computer's choice: ";
        showChoice(computer);

        chooseWinner(player, computer);
        
    }while(player != 'r' && player != 'p' && player != 's'); 

    return player;
}


char getUserChoice(){
    
    cin.clear();
    fflush(stdin);

    char player;

    cout << "Enter r, p or s: ";
    cin >> player;

    return player;
}

char getComputerChoice(){

    char computerChoice;

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 'i';
}

void showChoice(char choice){
    
    switch(choice){
        case 'r':
            cout << "Rock\n";
            break;
        case 'p':
            cout << "Paper\n";
            break;
        case 's':
            cout << "Scissors\n";
            break;
    }
}

void chooseWinner(char player, char computer){

    switch (player){
        case 'r':
            switch(computer){
                case 'r':
                    cout << "Its a tie\n";
                    break;
                case 'p':
                    cout << "You lose\n";
                    break;
                default:
                    cout << "You win\n"; 
            }
            break;
        case 'p': 
            switch(computer){
                case 'r':
                    cout << "You win\n";
                    break;
                case 'p':
                    cout << "Its a tie\n";
                    break;
                default:
                    cout << "You lose\n"; 
            }
            break;
        default:
            switch(computer){
                case 'r':
                    cout << "You lose\n";
                    break;
                case 'p':
                    cout << "You win\n";
                    break;
                default:
                    cout << "Its a tie\n"; 
            break;
            }
    }
}
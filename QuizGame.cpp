#include <iostream>

using namespace std;

int main(){

    string questions[] = {"1. What are you doing? ", "2. Are you dumb? ", "3. Um actually idk? ", "4. Yes i am bob who are you? "};

    string options[][4] = {{"\tA. Nothing", "\tB. Being dumb", "\tC. Running this program", "\tD. UM ACTUALLY"},
                          {"\tA. Yes of course", "\tB. No of course not", "\tC. YOU ARE DUMB", "\tD. HEHEHEHAW"},
                          {"\tA. STOP SAYING UMM ACTUALLY", "\tB. Yessir", "\tC. idk either", "\tD. MEMEMEMMEME"},
                          {"\tA. I am moomoo.io", "\tB. I am a big poopy", "\tC. I am newwwwb", "\tD. I am myself"}};
    
    char answerKey[] = {'B', 'D', 'B', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        cout << questions[i] << '\n';
        for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++){
            cout << options[i][j] << "\n";
        }

        cin >> guess;
        cout << '\n';
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout << "Correct.\n";
            score++;
        }else{
            cout << "Wrong. The correct answer is " << answerKey[i] << '\n'; 
        }
    }

    cout << "\nYour final score: " << score << '/' << size << " or " << (score/(double)size) * 100 << "%\n";

    if(score == 1){
        cout << "IMAGINE BEING NOOB AND SCORING 25%\n";
    }else if(score == 0){
        cout << "0! BIG FAT ZEERO LOSER\n";
    }else if(score == 2){
        cout << "HAHA big fat noob you failed\n";
    }else if(score == 3){
        cout << "LOL imagine getting a C xD\n";
    }else{
        cout << "nice hacks man >:C\n";
    }

    return 0;
}
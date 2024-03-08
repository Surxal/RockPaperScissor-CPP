#include <iostream>
#include <random>

using namespace std;

int main() {

    bool play = true;

    while (play == true){
        random_device rd;
        mt19937 gen(rd()); 

        uniform_int_distribution<> distr(1, 3); 

        int random = distr(gen);
        string optionAI = "";

        if (random == 1){
            optionAI = "S";
        }
        else if (random == 2){
            optionAI = "R";
        }
        else  {
            optionAI = "P";
        }

        cout << "Choose your option: " << endl;
        cout << "(S) for scissors   (R) for rock    (P) for paper   (exit) to exit" << endl;

        cout << "Enter: ";
        string option;
        cin >> option;

        if (option == optionAI){
            cout << "Tie!";
        }
        else if(option == "S" && optionAI == "R"){
            cout << "You lose" << endl;
            cout << "The computer chose " << optionAI;
        }
        else if(option == "R" && optionAI == "P") {
            cout << "You lose" << endl;
            cout << "The computer chose " << optionAI << endl;
        }
        else if(option == "P" && optionAI == "S") {
            cout << "You lose" << endl;
            cout << "The computer chose " << optionAI << endl;
        }
        else if(option == "S" && optionAI == "P"){
            cout << "You win!" << endl;
            cout << "The computer chose " << optionAI << endl;
        }
        else if(option == "R" && optionAI == "S") {
            cout << "You win!" << endl;
            cout << "The computer chose " << optionAI << endl;
        }
        else if(option == "P" && optionAI == "R") {
            cout << "You win!" << endl;
            cout << "The computer chose " << optionAI << endl;
        }
        else if(option == "exit"){
            play = false;
        }
    
    }

    return 0;
}
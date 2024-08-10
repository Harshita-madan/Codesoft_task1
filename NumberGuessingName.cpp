#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

void numberGuessingGame (){
    
    cout<< "*** WELCOME TO THE NUMBER GUESSING GAME ***"<<endl;
    
    cout<<endl;
    cout<< "INSTRUCTIONS: "<<endl;
    cout<<"The goal of the game is to guess the randomly generated number between 1 and 100."<<endl;
    cout<<endl;
    
    srand(time(0));
    int numberToGuess= (rand()%100) + 1;
    
    int attempts = 0;
    int guess;
    
    
    while(guess!=numberToGuess){
        
        cout << "Enter a number between 1-100"<<endl;
        cin>>guess;
        attempts++;
        
        if(guess>numberToGuess){
            cout<<"Too High! Try Again!!"<<endl;
            cout<<endl;
        }
        else if (guess<numberToGuess){
            cout<<"Too Low! Try Again!!"<<endl;
            cout<<endl;
        }
        else {
            cout<<endl;
            cout<< "Congratulations!! You have won the game !! "<<endl;
            cout<< "You took "<< attempts<<" attempts to guess the number correctly. "<<endl;
        }
    }
}

int main() {
    numberGuessingGame();

    return 0;
}

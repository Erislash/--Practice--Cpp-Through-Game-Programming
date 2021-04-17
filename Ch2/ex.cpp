#include <iostream>


using namespace std;

//1. Rewrite the Menu Chooser program from this chapter using an enumeration to represent difficulty levels. The variable choice will still be of type int.
void Chooser(void){
    enum difficult{EASY = 1, NORMAL, HARD};

    short int choice;
    cout<<"Choose a difficult:\n";
    cout<<"1-Easy\n";
    cout<<"2-Normal\n";
    cout<<"3-Hard\n"<<endl;
    
    cout<<"Your choice: "; cin>>choice;

    switch (choice)
    {
    case EASY:
        cout << "You picked Easy.\n";
        break;
    case NORMAL:
        cout << "You picked Normal.\n";
        break;
    case HARD:
        cout << "You picked Hard.\n";
        break;
    default:
        cout << "Wait, that's illegal.\n";
        break;
    }
    cout << "\n"<<endl;
}


//2. What’s wrong with the following loop?
// int x = 0;
// while (x)
// {
// ++x;
// cout << x << endl;
// }

//It won't excecute the while loop since x is evaluated to false



// 3. Write a new version of the Guess My Number program in which the player and the computer switch roles. That is, the player picks a number and the computer must guess what it is

void GuessIt(void){
    int numberToGuess;
    int tries = 0;
    int top = 100;
    int bottom = 1;
    int guess;


    cout<<"====================\n";
    cout<<"Welcome to Guess It!, where YOU choose the number\n";
    cout<<"====================\n\n";

    do{
        cout<<"Enter a Number between 1 and 100 (included): "; 
        cin>>numberToGuess;
        if(numberToGuess < 1 || numberToGuess > 100) cout<<"Invalid number. Try again.\n\n"; 
        else cout<<"You choosed: "<<numberToGuess<<" nice\n";
    }while (numberToGuess < 1 || numberToGuess > 100);

    cout<<"====================\n";
    cout<<"Guessing.........\n";
    cout<<"====================\n\n";

    do{
        guess = (top + bottom) / 2;
        tries++;
        cout<<"Choosed: "<<guess<<"\n";
        if(guess > numberToGuess){
            cout<<"Too High!\n";
            top = guess - 1;
        }else if(guess < numberToGuess){
            cout<<"Too Low!\n";
            bottom = guess + 1;
        }else{
            cout<<"That's it! The compurer got it in " <<tries<< " tries!\n";
        }

    }while (guess != numberToGuess);

}


int main(void) {
    // Chooser();
GuessIt();
    return 0;
}
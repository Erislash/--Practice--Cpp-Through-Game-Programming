// Guess My Number
// Classic number guessing game

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;


int main(void) {

    //=================SET UP================
    //Seeding
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = (rand() % 100) + 1;
    int tries = 0;
    int input;

    cout<<"====================\n";
    cout<<"Welcome to Guess My Number!\n";
    cout<<"====================\n\n";



    do{
    //=================GET PLAYER INPUT================
        cout<<"Enter a Number: "; cin>>input;

    //=================UPDATE GAME INTERNALS================
        ++tries;

    //=================UPDATE DISPLAY================
        if (input > secretNumber) cout<<"Too High!\n";
        else if (input < secretNumber) cout<<"Too Low!\n";
        else cout<<"That's it! You got it in " <<tries<< " tries!\n";
        
    //=================GAME OVER?================
    }while (input != secretNumber);
    cout<<"\n\n====================\n";
    cout<<"Thanks for playing!!!";
    cout<<"\n====================\n"<<endl;
    //=================SHUT DOWN================
    return 0;
}
// Word Jumble
// The classic word jumble game where the player can ask for a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"wall", "Do you feel you're banging your head against something?"},
        {"glasses", "These might help you see the answer."},
        {"labored", "Going slowly, is it?"},
        {"persistent", "Keep at it."},
        {"jumble", "It's what the game is all about."}
    };


    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string word = WORDS[choice][WORD];
    string hint = WORDS[choice][HINT];

    string jumble = word;
    unsigned short int length = jumble.size();

    for (int i = 0; i < length; ++i) {
        int idx1 = (rand() % length);
        int idx2 = (rand() % length);
        char temp = jumble[idx1];
        jumble[idx1] = jumble[idx2];
        jumble[idx2] = temp;
    }

    cout << "\n========================\n";  
    cout << "Welcome to Word Jumble!\n";
    cout << "\n========================\n\n";  
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "Enter 'quit' to quit the game.\n\n";
    cout << "The jumble is: " << jumble;
    string input;
    cout << "\n\nYour guess: ";
    cin >> input;


    while ((input != word) && (input != "quit")){
        if (input == "hint") cout << hint;
        else cout << "Sorry, that's not it.";
        cout <<"\n\nYour guess: ";
        cin >> input;
    }

    if (input == word) cout << "\nThat's it! You guessed it!\n";
    cout << "\nThanks for playing.\n";

    return 0;
}
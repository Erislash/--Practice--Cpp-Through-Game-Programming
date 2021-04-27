#include <iostream> // El flujo de entrada y salida de datos en C++ (y su predecesor C) no se encuentra definida dentro de la sintaxis básica y se provee por medio de librerías de funciones especializadas como iostream
#include <string>   // Un archivo de la Biblioteca estándar del lenguaje de programación C que contiene la definición de macros, constantes, funciones y tipos y algunas operaciones de manipulación de memoria.
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main(void){
    //-----------------------SETUP
    const int MAX_MISTAKES = 8; //Maximo número de intentos

    vector<string> words;   // Un vector con las posibles palabras a usar
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("GAME");
    words.push_back("VIDEOGAME");
    words.push_back("COMPUTER");
    words.push_back("PROGRAMMING");

    srand(static_cast<unsigned int>(time(0)));  //Se elige una palabra al azar
    random_shuffle(words.begin(), words.end()); //...
    const string WORD = words[0];               //...

    int mistakes = 0;   // Intentos totales
    string soFar(WORD.size(), '-'); //Crea una nueva variable que contiene tantos guiones (-) como cantidad de caracteres tiene la palabra elegída

    cout<<soFar<<"\n"; // Imprime tantos guiones (-) como cantidad de caracteres tiene la palabra elegída
    string usedLetters = ""; //Letras ya utilizadas
    cout<<"Welcome to Hangman. Good luck!\n";

    //Game Loop
    while ((mistakes < MAX_MISTAKES) && (soFar != WORD)){ //Mientras no se haya adivinado la palabra (soFar != WORD) y la cantidad de errores no sea igual o mayor a el máximo establecido (mistakes < MAX_MISTAKES), el blucle continuará
        cout<<"\n\nYou have "<<(MAX_MISTAKES - mistakes)<<" incorrect guesses left.\n"; // Cuantos intentos te quedan
        cout<<"\nYou've used the following letters:\n"<<usedLetters<<"\n";
        cout<<"\nYou've guessed:\n"<<soFar<<endl;

        char guess;
        cout<<"\n\nEnter your guess: ";
        cin>>guess;
        guess = toupper(guess);

        while (usedLetters.find(guess) != string::npos){
            cout<<"\nYou've already Entered "<<guess<<endl;
            cout<<"Enter a new guess: ";
            cin>>guess;
            guess = toupper(guess);
        }
        usedLetters += guess;

        if (WORD.find(guess) != string::npos){
            cout<<"That's right! *"<<guess<<"* is in the word.\n";
            for (int i = 0; i < WORD.length(); ++i){
                if (WORD[i] == guess){
                soFar[i] = guess;
                }
            }
        }
        else{
        cout << "Sorry, " << guess << " isn't in the word.\n";
            ++mistakes;
        }
    } 

    if (mistakes == MAX_MISTAKES){
        cout<<"\nYou've been hanged!";
    }
    else{
        cout<<"\nYou guessed it!";
    }
    cout<<"\nThe word was "<<WORD<<endl;
    
    return 0;
}

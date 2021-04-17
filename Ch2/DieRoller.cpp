// Die Roller
// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>  //Contains functions that deal with generating random numbers, the function rand() for example
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
    //Seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();

    //Num between 1 and 6 (included)
    int die = (randomNumber % 6) + 1;
    cout<<"You rolled a "<<die<<endl;

    return 0;
}
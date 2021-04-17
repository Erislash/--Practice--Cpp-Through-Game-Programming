#include <iostream>

// using namespace std;
using std::cout;
using std::cin;
using std::endl;

//Game Status
int main(void) {
   const int POINTS_PER_ALIEN = 150;
   int aliensKilled = 10;
   int score = aliensKilled * POINTS_PER_ALIEN;
   cout<<"Score: "<<score<<endl;


    enum difficulty {NOVICE, EASY, NORMAL, HARD, INSANITY};
    difficulty myDifficult = EASY;

    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
    shipCost myShipCost = BOMBER_COST;
    cout << "\nTo upgrade my ship to a Cruiser will cost "
    << (CRUISER_COST - myShipCost) << " Resource Points.\n";


    return 0;
}
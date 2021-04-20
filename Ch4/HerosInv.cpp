// Hero’s Inventory 2.0
//Vectors

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    vector<string> inventory;
    inventory.push_back("Dragonkiller Sword");
    inventory.push_back("Holly Armor");
    inventory.push_back("Dark Shield");


    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;

    cout << "You have " << inventory.size() << " items in your inventory.\n";

    cout<<"=============\n\n";
    cout<<"Your items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout <<"* " <<*iter << "\n";
    }
    cout<<"=============\n\n";

    cout << "\nYou trade your sword for a Battle Axe.\n";
    inventory[0] = "Battle Axe";

    cout<<"=============\n\n";
    cout<<"Your items now:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout <<"* " <<*iter << "\n";
    }
    cout<<"=============\n\n";

    cout << "\nYour shield is destroyed in a fierce battle.\n\n";
    inventory.pop_back();

    cout<<"=============\n";
    cout<<"Your items now:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout <<"* " <<*iter << "\n";
    }
    cout<<"=============\n\n";

    return 0;
}
// Hero’s Inventory
// Demonstrates arrays
#include <iostream>
#include <string>

using namespace std;


int main()
{
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];

    int numItems = 0;
    inventory[numItems++] = "Sword";
    inventory[numItems++] = "Armor";
    inventory[numItems++] = "Shield";

    cout<<"Your Items:\n";
    for(unsigned short int i = 0; i < numItems; ++i){
        cout<<"-"<<inventory[i]<<endl;
    }

    cout<<"\nYou traded your Sword for a battle Axe.\n";
    inventory[0] = "Battle Axe";
    cout<<"\nYour Items now:\n";
    for(unsigned short int i = 0; i < numItems; ++i){
        cout<<"-"<<inventory[i]<<endl;
    }

    cout << "\n\nThe item " << inventory[0] << " has ";
    cout << inventory[0].size() << " letters in its name.\n\n";

    cout << "\nYou find a _Healing potion_.";
    if (numItems < MAX_ITEMS){
        inventory[numItems++] = "Healing potion";
    }
    else{
        cout << "You have too many items and can’t carry another.";
    }

    cout<<"\nYour Items now:\n";
    for(unsigned short int i = 0; i < numItems; ++i){
        cout<<"-"<<inventory[i]<<endl;
    }


    return 0;
}
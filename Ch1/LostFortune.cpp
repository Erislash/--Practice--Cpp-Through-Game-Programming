#include <iostream>
#include <string>

//I declare which elements from the std namespace I want local
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(void){
    const int GOLD_PIECES = 900;
    int adventurers; //Total of adventurers who started the journey
    int killed; //How many adventurers were killed in the trip
    int survivors;
    string leader;

    cout<<"================\n";
    cout<<"Welcome to Lost Fortune\n";
    cout<<"================\n";
    cout<<"Let's set uo your adventure!\n";

    cout<<"Enter a number: "; cin>>adventurers;

    cout<<"Enter a number, smaller than the first: "; cin>>killed;

    survivors = adventurers - killed;

    cout<<"Enter your last name: "; cin>>leader;

    //Telling the story
    cout<<"\nA brave group of " << adventurers << " adventurers set out on a quest ";
    cout<<"--in search of the lost treasure of the Ancient Dwarves. ";
    cout<<"The group was led by a legendary rogue, the ex Assassin's Guild master, " << leader << ".\n";
    cout<<"\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout<<"All fought bravely under the command of " << leader;
    cout<<", and the ogres were defeated, but at a cost. ";
    cout<<"Of the adventurers, " << killed << " were vanquished, ";
    cout<<"leaving just " << survivors << " in the group.\n";

    cout<<"\nThe party was about to give up all hope. ";
    cout<<"But while laying the deceased to rest, ";
    cout<<"they stumbled upon the buried fortune. ";
    cout<<"So the adventurers split " << GOLD_PIECES << " gold pieces.";
    cout<<leader << " held on to the extra " << (GOLD_PIECES % survivors);
    cout<<" pieces to keep things fair of course.\n";


    return 0;
}
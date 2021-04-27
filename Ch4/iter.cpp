#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
    vector<string> goldenSaints;
    goldenSaints.push_back("Mu");
    goldenSaints.push_back("Aldebaran");
    
    goldenSaints.push_back("Deathmask");
    goldenSaints.push_back("Aiolia");
    goldenSaints.push_back("Shaka");
    goldenSaints.push_back("Dohko");
    goldenSaints.push_back("Shura");
    goldenSaints.push_back("Aiolos");
    goldenSaints.push_back("Milo");
    goldenSaints.push_back("Camus");
    goldenSaints.push_back("Aphodite");

    vector<string>::iterator saintIterator;
    vector<string>::const_iterator iter;

    goldenSaints.insert(goldenSaints.begin() + 2, "Saga");
    cout<<"There are "<< goldenSaints.size() <<" Golden Saints:\n";
    for (saintIterator = goldenSaints.begin(); saintIterator != goldenSaints.end(); ++saintIterator){
        cout<<*saintIterator<<"\n";
    }
    saintIterator = goldenSaints.begin();

    return 0;
}
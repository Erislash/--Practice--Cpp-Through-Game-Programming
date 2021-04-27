// High Scores
// Demonstrates algorithms
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void){
    vector<int>::const_iterator iter;
    vector<int> scores;
    scores.push_back(1598);
    scores.push_back(3212);
    scores.push_back(3437);


    cout << "\nHigh Scores:\n";
    for (iter = scores.begin(); iter != scores.end(); ++iter){
        cout << *iter << endl;
    }

    int searchForScore;
    cout<<"\nEnter a score to find: "; cin>>searchForScore;
    iter = find(scores.begin(), scores.end(), searchForScore);
    if (iter != scores.end()) cout<<"Score found."<<endl;
    else cout<<"Score NOT found."<<endl;

    return 0;
}
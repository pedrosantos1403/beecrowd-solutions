#include <bits/stdc++.h>

using namespace std;

int main(){

    int number, num_marked, num_bought;
    int marked, bought;

    set<int> markeds;
    set<int> boughts;

    cin >> number >> num_marked >> num_bought;

    while(num_marked--){

        cin >> marked;
        markeds.insert(marked);

    }

    while(num_bought--){

        cin >> bought;
        boughts.insert(bought);

    }

    for(int i : boughts){

        if(markeds.find(i) != markeds.end()) markeds.erase(i);

    }

    cout << markeds.size() << endl;


}
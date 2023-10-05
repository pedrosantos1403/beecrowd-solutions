#include <bits/stdc++.h>

using namespace std;

// kung -> 1
// lu -> 9

int main(){

    int total = 16, pos;

    vector<int> camp;

    while(total--){

        cin >> pos;

        camp.push_back(pos);

    }

    int kung, lu;

    for(int i = 0 ; i < camp.size() ; i++){

        if(camp[i] == 9) kung = i;
        else if(camp[i] == 1) lu = i;

    }

    if(kung / 2 == lu/ 2) cout << "oitavas" << endl;

    else if(kung / 4 == lu/ 4) cout << "quartas" << endl;

    else if(kung / 8 == lu/ 8) cout << "semifinal" << endl;

    else cout << "final" << endl;

}
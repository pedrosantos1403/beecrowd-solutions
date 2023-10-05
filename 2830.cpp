#include <bits/stdc++.h>

using namespace std;

int main(){

    int kung, lu;

    cin >> kung >> lu;

    if((kung - 1) / 2 == (lu - 1) / 2) cout << "oitavas" << endl;

    else if((kung - 1) / 4 == (lu - 1) / 4) cout << "quartas" << endl;

    else if((kung - 1) / 8 == (lu - 1) / 8) cout << "semifinal" << endl;

    else cout << "final" << endl;

}
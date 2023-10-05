#include <bits/stdc++.h>

using namespace std;

int main(){

    double x, y, z;

    cin >> x >> y >> z;

    double soma = 2*x + 3*y + 5*z;

    double media = soma/10;


    // Setando precisão de casa decimal para o cout;
    cout << fixed << setprecision(1);

    cout << "MEDIA = " << media << endl;

    return 0;
}
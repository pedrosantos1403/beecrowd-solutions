#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    string nome;
    
    cin >> nome;
    
    double s, v;
    
    cin >> s >> v;
    
    double bonus = 15*v/100;
    
    cout << fixed << setprecision(2);
    
    cout << "TOTAL = R$ " << s+bonus << endl;
    
}
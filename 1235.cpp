// Ler do meio da String até o começo e inverter
// Ler do final da String até o meio e inverter
// Concatenar as duas partes


#include <bits/stdc++.h>

using namespace std;

int main(){

    int num;
    string in;

    cin >> num;
    cin.ignore(); // Ignora a quebra de linha

    while(num){

        getline(cin, in);

        reverse(in.begin(), in.begin()+in.length()/2); // Invertendo a primeira metade da String
        reverse(in.begin()+in.length()/2, in.end()); // Invertendo a segunda metade da String

        //Resultado
        cout << in << endl;

        num--;

    }
    
}
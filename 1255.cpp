#include <bits/stdc++.h>

using namespace std;

int main(){

    int num;
    string in;
    map<char,int> m;
    vector<char> v;

    cin >> num;
    cin.ignore();

    while(num){

        v.clear();
        m.clear();
        
        getline(cin, in);

        for(int i = 0 ; i < in.length() ; i++){

            if(tolower(in[i]) >= 97 && tolower(in[i]) <= 122){ //Deve ser uma letra

                if(m.find(tolower(in[i])) != m.end()){
                    
                    m[tolower(in[i])]++; //Somar 1 caso a letra apareça novamente;

                }

                else{
                    
                    v.push_back(tolower(in[i]));
                    m.insert(pair<char,int> (tolower(in[i]), 1)); // Inserir a letra caso ela seja uma nova letra;

                }

            }

        }

        int max = 0;
        max = m.at(v[0]);

        for(int i = 0 ; i < v.size() ; i++){

            if(m.at(v[i]) > max) max = m.at(v[i]); // Definindo o valor máximo da chave;

        }

        sort(v.begin(), v.end()); // Colocando em ordem alfabética;

        for(int i = 0 ; i < v.size() ; i++){

            if(m.at(v[i]) == max) cout << v[i]; // Imprimindo as letras com mais aparições na string de entrada;

        }

        cout << endl;
        
        num--;

    }

}
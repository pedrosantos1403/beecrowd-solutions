#include <bits/stdc++.h>

using namespace std;

int main(){

    string msg, aux;
    string delimiter = " ";

    int n, cont = 0, pos = 0;

    while(cin >> n){

        getchar();

        while(n--){

            getline(cin, msg);

            while ((pos = msg.find(delimiter)) != string::npos){
            
                // Salvando a sub string;
                aux = msg.substr(0, pos);

                // Apagando sub string;
                msg.erase(0, pos + delimiter.length());

                // Adicionando ao contador;
                cont++;

            }

            cont++;

            if(aux.compare("...") == 0 || msg.compare("...") == 0){
                int c = 99 + 3*(cont-1);
                cout << char(c) << endl;
            }
            else if(aux.compare("..") == 0 || msg.compare("..") == 0){
                int b = 98 + 3*(cont-1);
                cout << char(b) << endl;
            }
            else if(aux.compare(".") == 0 || msg.compare(".") == 0){
                int a = 97 + 3*(cont-1);
                cout << char(a) << endl;
            }

            cont = 0;
            aux.clear();

        }

    }

}
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, pos = 0, maior = 0;

    string str, sub, aux, max;
    string delimiter = " ";

    vector<int> vet;

    while(true){

        getline(cin, str);

        if(str.compare("0") == 0) break;

        // Inicializando variáveis;
        aux = str;
        vet.clear();
        sub.clear();

        while ((pos = aux.find(delimiter)) != string::npos) {

            // Salvando a substring que vem antes do espaço;
            sub = aux.substr(0, pos);

            // Apagar porção da string já analisada;
            aux.erase(0, pos + delimiter.length());

            // Salvando no vetor o tamanho da substring;
            vet.push_back(sub.length());

            // Testando se a substring em questão é maior que a anterior;
            if(sub.length() >= maior){

                maior = sub.length();
                max = sub;

            }

        }

        // Operando sobre o restante da string;
        vet.push_back(aux.length());

        // Testando se a substring em questão é maior que a anterior;
        if(aux.length() >= maior){

            maior = aux.length();
            max = aux;

        }

        // Percorrer vetor de tamanhos e imprimir;
        for(int i=0; i<vet.size(); i++){

            if(i == 0) cout << vet[i];
            else cout << "-" << vet[i];

        }

        // Quebrando a linha para a próxima entrada;
        cout << endl;

    }

    cout << endl;
    cout << "The biggest word: " << max << endl;

    return 0;
}
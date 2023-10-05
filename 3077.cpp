#include <bits/stdc++.h>

using namespace std;

// A cada etapa o vetor de pequis anda uma casa para a direita;
// A cada etapa o vetor de trabalhadores soma uma quantidade nova de pequis para cada trabalhador;

int main(){

    int trab, etapa, aux;

    cin >> trab >> etapa;

    vector<int> pequis;

    int workers[trab] = {0};


    for(int i = 0 ; i < trab ; i++){
        
        int num;

        cin >> num;

        pequis.push_back(num);

    }

    for(int i = 0 ; i < etapa ; i++){

        // Vetor de pequis anda uma casa para a direita;
        // Vetor de trabalhadores soma a quantidade de pequis para cada trabalhador;

        aux = pequis[trab-1]; // Aux recebe pequis na última posição;

        for(int j = trab-1 ; j >= 0 ; j--){

            workers[j] += pequis[j];
            if(j == 0) pequis[j] = aux;
            else pequis[j] = pequis[j-1];


        }

    }

    for(int i = 0 ; i < trab ; i++){

        cout << workers[i] << " ";

    }

    cout << "\n\n";

}
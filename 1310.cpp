#include <bits/stdc++.h>

using namespace std;

// Algoritmo Guloso

int main(){

    int days = 0, cost = 0, payment = 0, lucro = 0, soma = 0, elements = 0;
    vector<int> vet;

    while(cin >> days){

        cin >> cost;

        for(int i=0; i<days; i++){
            cin >> payment;
            vet.push_back(payment);
        }


        for(int i=0; i<days; i++){

            soma = vet[i];
            elements++;
            if(vet[i] - cost > lucro) lucro = vet[i] - cost;

            for(int j=i+1; j<=days; j++){

                if(j != days){
                    soma = soma + vet[j];
                    elements++;
                }

                if(soma - cost*elements > lucro) lucro = soma - cost*elements;

            }

            soma = 0;
            elements = 0;

        }

        cout << lucro << endl;
        lucro = 0;
        vet.clear();
        soma = 0;
        elements = 0;

    }

}
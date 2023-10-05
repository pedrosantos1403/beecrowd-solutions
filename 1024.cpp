// Primeira Passagem : Letras Maiúsculas e Minúsculas devem ser deslocados para a direita 3 posições na tabela ASCII
// Segunda Passagem : Inverter a linha
// Terceira Passagem : Da metade da lista pra frente os caracteres sao deslocados uma posição para a esquerda na tabela ASCII

#include <bits/stdc++.h>

using namespace std;

int main(){

    int num;
    string in;

    cin >> num;
    cin.ignore(); // Ignora a quebra de linha

    while(num){

        getline(cin, in);
        //cin.ignore('\n');
        //cin >> lixo;

        // Primeira Passagem
        for(int i = 0 ; i < in.length() ; i++){

            if((in[i] >= 65 && in[i] <=90) || (in[i] >= 97 && in[i] <= 122)){

                in[i] = in[i] + 3;

            }

        }

        //Segunda Passagem
        reverse(in.begin(), in.end());

        //Terceira Passagem
        for(int i = in.length()/2 ; i < in.length() ; i++){

            in[i] = in[i] - 1;

        }

        //Resultado
        cout << in << endl;

        num--;

    }
    
}
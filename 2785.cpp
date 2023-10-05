
// Se uma caixa está na pirâmide, a caixa imediatamente abaixo dela também deve estar na pirâmide;

// Na i-ésima linha de caixas (a linha 1 é a do topo da matriz), a pirâmide deve ter exatamente i caixas consecutivas

#include <bits/stdc++.h>

using namespace std;

int main(){

    int num, num_primeira_linha;

    cin >> num;

    int mat[num][num];

    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < num ; j++){

            cin >> mat[i][j];

        }
    }

        for(int i = 0 ; i < num ; i++){

            num_primeira_linha = mat[num][0];   // Variável recebe os valores da primeira coluna;

            

        }

    cout << mat[0][0] << endl;


    return 0;
}
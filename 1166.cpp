#include <bits/stdc++.h>

using namespace std;

int total_bolas;
int hastes;

//Esse array salva a última bola inserida em cada haste;
int vet[51];

//solve(NÚMERO DA PRÓXIMA BOLA A SER INSERIDA, NÚMERO DA HASTE ONDE A BOLA SERÁ INSERIDA);
void solve(int v, int p){

    // Se p for igual à hastes, 
    if(p == hastes) return;

    if(vet[p] == 0){ // Nesse caso, a haste está vazia;

        // Caso uma haste esteja vazia, a bola com valor v é inserida nela;
        vet[p] = v;

        total_bolas++;

        // Chamando a função solve passando o valor da próxima bola na sequência e o valor da mesma haste;
        return solve(v+1, p);
        
    }

    // Caso a haste não esteja vazia, precisamos checar se a soma da nova bola a ser inserida com a última bola inserida
    // naquela haste, é um quadrado perfeito;
    for(int i=0; i<=p; i++){
        int raiz = (int) sqrt(vet[i] + v);
        if(pow(raiz,2) == vet[i] + v){ // A soma é um quadrado perfeito;

            vet[i] = v;
            total_bolas++;
            return solve(v+1, p);

        }
    }

    // Valor da bola não se encaixou em nenhuma haste populada, logo precisamos colocá-lo na próxima haste;
    solve(v, p+1);

}

int main(){

    int testes;

    cin >> testes;

    while(testes--){

        cin >> hastes;

        // Número máximo de hastes possível é 50;
        // Inicializando o vetor com 0 em todas as posições;
        for(int i=0; i<50; i++){
            vet[i] = 0;
        }

        total_bolas = 0;

        // Primeira bola é sempre 1, e a primeira haste é sempre 0;
        solve(1, 0);

        //if(hastes == 1) total_bolas = -1;

        cout << total_bolas << endl;

    }

    return 0;

}
//Dominó

#include <bits/stdc++.h>

using namespace std;

int main(){

    bool controle;
    int teste = 0;

    while(true){

        teste++;

        int N, cont = 0;
        int X, Y;

        cin >> N; // Lendo a quantidade de peças;

        int pecas[N][2]; // Matriz para armazenar as peças -> Número da peça é o número da linha
        int resultado[N][N]; // Matriz para armazenar resultados de combinações entre peças;

        // Inicializando a matriz;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                resultado[i][j] = 0;
            }
        }


        // 1 -> Peças se encaixam
        // 0 -> Peças não se encaixam;
        
        if(N == 0) break;

        // Lendo os valores das peças;
        for(int i = 0 ; i < N ; i++){
            cin >> X >> Y;
            pecas[i][0] = X;
            pecas[i][1] = Y;
        }

        // Salvando os encaixes de cada peça;
        for(int i = 0 ; i < N ; i++){
            for(int j = i+1 ; j < N ; j++){
                if( (pecas[i][0] == pecas[j][0]) || (pecas[i][0] == pecas[j][1]) || 
                    (pecas[i][1] == pecas[j][0]) || (pecas[i][1] == pecas[j][1]) ){
                    // As peças se encaixam;
                    resultado[i][j] = 1;
                    resultado[j][i] = 1;
                }
            }

        }

        // Imprimindo matriz resultado;
        cout << "Matriz Resultado: " << endl;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                cout << " " << resultado[i][j];
            }
            cout << endl;
        }


        // Checando o número de encaixes de cada peça;
        int conect_1 = 0;
        int conect_2 = 0;
        int encaixes = 0;
        int erro = 0;

        for(int i = 0 ; i < N ; i++){
            encaixes = 0;
            for(int j = 0 ; j < N ;j++){
                if(resultado[i][j] == 1){
                    encaixes++;
                }
            }
            //cout << "encaixes: " << encaixes << endl;
            if(encaixes >= 2) conect_2++;
            else if(encaixes == 1) conect_1++;
            else{
                cont = 0;
                conect_1 = 0;
                conect_2 = 0;
                break;
            }
        }

        //cout << "conect 1: " << conect_1 << endl;
        //cout << "conect 2: " << conect_2 << endl;


        //Checando a conexão das peças -> Se 2 peças tiverem 1 conexão e as outras 2 ou mais conexões o dominó pode ser montado;
        if(conect_2 == N) cont++;
        else if(conect_1 == 2) cont++;
        else if((conect_1 == 1) && (conect_2 == N - 1)) cont++;

        //cout << "contador" << cont << endl;    

        if(cont == 1){
            cout << "Teste " << teste << endl;
            cout << "sim" << endl;
        }
        else{
            cout << "Teste " << teste << endl;
            cout << "nao" << endl; 
        }

   }

}


// Imprimindo matriz resultado;
        /*cout << "Matriz Resultado: " << endl;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                cout << " " << resultado[i][j];
            }
            cout << endl;
        }

        // Analisando caso ideal, onde todas as peças encaixam com todas as peças;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                if(i != j && resultado[i][j] == 0){
                    cont = 0;
                    break;
                }
                else cont = 1;
            }
        }*/
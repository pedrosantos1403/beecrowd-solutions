#include <bits/stdc++.h>

using namespace std;

// OBS -> Se a linha termina com uma letra, o próximo espaço não é contado na linha de baixo;

int main(){

    string str;

    // Entradas;
    int letras_linha, linha_pag, num_palavras;

    // Auxiliares;
    int cont_letras = 0, cont_linhas = 0, cont_pags = 0;

    while(cin >> num_palavras >> linha_pag >> letras_linha){

        getchar();

        getline(cin, str);

        // Inicializando variáveis;
        cont_letras = 0;
        cont_linhas = 0;
        cont_pags = 0;

        for(int i=0; i<str.length(); i++){

            // Checando se uma página já foi ocupada;
            if(cont_linhas == linha_pag){
                cont_pags++;
                cont_linhas = 0;
            }

            // Somando a quantidade de letras por linha;
            if(cont_letras == 0 && str[i] != ' ') cont_letras++;
            else if(cont_letras != 0) cont_letras++;

            // Chacando se a linha está cheia;
            if(cont_letras == letras_linha){

                cont_letras = 0;
                cont_linhas++;

            }

            // Verificando se a letra é um espaço;
            else if(str[i] == ' '){
                
                // Pegando a substring do espaço até o final da string;
                string sub = str.substr(i+1, str.length());

                // Procurando o primeiro espaço dentro da substring;
                int pos = sub.find(' ');

                // Pegando a substring que vem antes do espaço;
                string subsub = sub.substr(0, pos);

                // Checando se a palavra cabe inteira dentro da linha;
                if(subsub.length() + cont_letras > letras_linha){

                    // Nesse caso a palavra subsequente ao espaço não cabe na linha;
                    cont_letras = 0;
                    cont_linhas++;

                    if(cont_linhas == linha_pag){
                        cont_pags++;
                        cont_linhas = 0;
                    }

                }

            }

        }

        if(cont_letras > 0 && cont_letras <= letras_linha) cont_linhas++;
        if(cont_linhas > 0 && cont_linhas <= linha_pag) cont_pags++;

        cout << cont_pags << endl;

    }

    return 0;

}
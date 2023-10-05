#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;
    string d1 = "*", d2 = "_";

    long long pos = 0;

    // TRUE se ja tiver lido algo, FALSE se ainda não tiver lido;
    bool aux_d1 = false;
    bool aux_d2 = false;

    while(getline(cin, str)){

        for(pos=0; pos<str.length(); pos++){


            //Testando *
            if(str[pos] == '*'){

                if(aux_d1 == false){

                    // Alterar o valor da variável de controle;
                    aux_d1 = true;

                    // Salvar a substring da posição atual até o final da string;
                    string sub = str.substr(pos+1, str.length());

                    // Aumentando o tamnho da string em 3;
                    str.resize(str.length() + 3);

                    // Inserindo novos valores na string;
                    str[pos] = '<';
                    str[pos+1] = 'b';
                    str[pos+2] = '>';

                    // Realocando os elementos da string;
                    str.replace(pos+3, str.length(), sub);

                }

                else{

                    // Alterar o valor da variável de controle;
                    aux_d1 = false;

                    // Salvar a substring da posição atual até o final da string;
                    string sub = str.substr(pos+1, str.length());

                    // Aumentando o tamnho da string em 4;
                    str.resize(str.length() + 4);

                    // Inserindo novos elementos na string;
                    str[pos] = '<';
                    str[pos+1] = '/';
                    str[pos+2] = 'b';
                    str[pos+3] = '>';

                    // Realocando os elementos da string;
                    str.replace(pos+4, str.length(), sub);

                }

            }

            // Testando _
            else if(str[pos] == '_'){

                if(aux_d2 == false){

                    // Alterar o valor da variável de controle;
                    aux_d2 = true;

                    // Salvar a substring da posição atual até o final da string;
                    string sub = str.substr(pos+1, str.length());

                    // Aumentando o tamnho da string em 3;
                    str.resize(str.length() + 3);

                    // Inserindo novos valores na string;
                    str[pos] = '<';
                    str[pos+1] = 'i';
                    str[pos+2] = '>';

                    // Realocando os elementos da string;
                    str.replace(pos+3, str.length(), sub);

                }

                else{

                    // Alterar o valor da variável de controle;
                    aux_d2 = false;

                    // Salvar a substring da posição atual até o final da string;
                    string sub = str.substr(pos+1, str.length());

                    // Aumentando o tamnho da string em 4;
                    str.resize(str.length() + 4);

                    // Inserindo novos elementos na string;
                    str[pos] = '<';
                    str[pos+1] = '/';
                    str[pos+2] = 'i';
                    str[pos+3] = '>';

                    // Realocando os elementos da string;
                    str.replace(pos+4, str.length(), sub);

                }

            }

        }

        cout << str << endl;

    }

    return 0;

}
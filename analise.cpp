#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    //vector<string> positivo = {"excelente", "bom", "otimo", "adoro", "amo"};
    //vector<string> negativo = {"ruim", "pessimo", "odeio", "droga", "fraco"};

    string positivo = "excelente bom otimo adoro amo excelente! bom! otimo! adoro! amo!";
    string negativo = "ruim pessimo odeio droga fraco ruim! pessimo! odeio! droga! fraco!";

    int num;
    int pos = 0;
    int pos2 = 0;
    int cont_pos = 0;
    int cont_neg = 0;

    string tweet, aux;
    string delimiter = " ";
    string current, previous;

    while(cin >> num){

        getchar();

        cont_pos = 0;
        cont_neg = 0;

        while(num--){

            getline(cin, tweet);

            aux.clear();
            previous.clear();
            current.clear();

            aux = tweet;

            while (((pos = aux.find(delimiter)) != string::npos)){

                previous = current;

                current = aux.substr(0,pos);

                pos2 = current.find("!");

                if(pos2 > 0) current = current.substr(0, pos2);

                //cout << "current: " << current << endl;

                //Checar se a palavra é positiva ou negativa
                if(positivo.find(current) != string::npos){
                    if(previous.compare("nao") == 0) cont_neg++;
                    else cont_pos++;
                }
                else if(negativo.find(current) != string::npos){
                    if(previous.compare("nao") == 0) cont_pos++;
                    else cont_neg++;
                }

                aux.erase(0, pos + delimiter.length());

            }

            //Cheacndo ultima palavra

            previous = current;
            
            current = aux;

            pos2 = current.find("!");

            if(pos2 > 0) current = current.substr(0, pos2);

            if(positivo.find(current) != string::npos){
                    if(previous.compare("nao") == 0) cont_neg++;
                    else cont_pos++;
                }
            else if(negativo.find(current) != string::npos){
                    if(previous.compare("nao") == 0) cont_pos++;
                    else cont_neg++;
                }

            //cout << "current: " << current << endl;

        }

        //cout << "pos: " << cont_pos << endl;
        //cout << "neg: " << cont_neg << endl;

        if(cont_pos > cont_neg) cout << "positivo" << endl;
        else if(cont_neg > cont_pos) cout << "negativo" << endl;
        else cout << "neutro" << endl;

    }
}
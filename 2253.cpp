#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;

    int aux = 0;

    bool maiuscula = false, minuscula = false, num = false;

    while(getline(cin, str)){

        // Inicializando variáveis;
        num = false;
        maiuscula = false;
        minuscula = false;
        aux = 0;

        // Checando tamanho da string;
        if(str.size() < 6 || str.size() > 32) aux++;

        else{

            for(int i=0; i<str.size(); i++){

                if(str[i] >= 48 && str[i] <= 57) num = true;

                else if(str[i] >= 65 && str[i] <= 90) maiuscula = true;

                else if(str[i] >= 97 && str[i] <= 122) minuscula = true;

                else{
                    aux++;
                    break;
                }

            }
        
        }

        if(num == true && maiuscula == true && minuscula == true && aux == 0) cout << "Senha valida.\n";
        else if(aux == 1) cout << "Senha invalida.\n";

    }

    return 0;

}

// Código da internet usando isdigit(), islower(), isalpha() e issuper()

/*

#include <iostream>
using namespace std;
int main() {
    string palavra;
    bool r;
    int i, c;
    while (getline(cin, palavra)) {
        r = true;
        c = 0;
        if (palavra.size() < 6 || palavra.size() > 32)
        	r = !r;
        else {
        	for (i = 0; i < palavra.size(); i++) {
        		if (!isalpha(palavra[i]) && !isdigit(palavra[i])) {
        			r = !r;
        			break;
        		}
        	}
        	if (r) {
	        	for (i = 0; i < palavra.size(); i++) {
	        		if (islower(palavra[i]) && isalpha(palavra[i])) {
	        			c++;
	        			break;
	        		}
	        	}
	        	for (i = 0; i < palavra.size(); i++) {
	        		if (isupper(palavra[i]) && isalpha(palavra[i])) {
	        			c++;
	        			break;
	        		}
	        	}
	        	for (i = 0; i < palavra.size(); i++) {
	        		if (isdigit(palavra[i])) {
	        			c++;
	        			break;
	        		}
	        	}
	        }
        }
        cout << "Senha " << (!r || c!=3? "in" : "") << "valida." << endl;
    }
    return 0;
}

*/
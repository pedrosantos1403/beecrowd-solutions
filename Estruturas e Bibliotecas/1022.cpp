#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin >> n; getchar();

    long long int n1,d1,n2,d2, n_final, d_final;
    char symbol, first_bar, second_bar;
    string op;

    while(n--){

        getline(cin, op);
        
        stringstream ss = stringstream(op);

        ss >> n1 >> first_bar >> d1 >> symbol >> n2 >> second_bar >> d2;

        if(symbol == '+'){ //(N1*D2 + N2*D1) / (D1*D2)
            n_final = (n1*d2 + n2*d1);
            d_final = (d1*d2);
        }
        else if(symbol == '-'){ // (N1*D2 - N2*D1) / (D1*D2)
            n_final = (n1*d2 - n2*d1);
            d_final = (d1*d2);
        }
        else if(symbol == '/'){ // (N1*D2)/(N2*D1)
            n_final = (n1*d2);
            d_final = (n2*d1);
        }
        else{ // (N1*N2) / (D1*D2)
            n_final = (n1*n2);
            d_final = (d1*d2);
        }

        cout << n_final << "/" << d_final << " = ";

        int gcd;
        int negative = 0;

        if(n_final < 0 || d_final < 0){
            negative++;
            n_final = (n_final * (-1));
            d_final = (d_final * (-1));
        }

        while((gcd = __gcd(n_final, d_final)) != 1){
            n_final = n_final / gcd;
            d_final = d_final / gcd;
        }

        if(negative){
            n_final = (n_final * (-1));
            d_final = (d_final * (-1)); 
        }

        negative = 0;
        

        cout << n_final << "/" << d_final << endl;

    }
}
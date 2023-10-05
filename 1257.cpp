#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, caso;
    string str;

    cin >> n;

    while(n--){

        cin >> caso;

        int linha = 0;
        int letra = 0, total = 0;

        while(caso--){

            cin >> str;

            for(int i=0; i<str.length(); i++){

                letra = linha + i + str[i]-65;
                total = total + letra;

            }

            linha++;

        }

        cout << total << endl;

    }

    return 0;
}
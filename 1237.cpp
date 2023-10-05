#include <bits/stdc++.h>

using namespace std;

int main(){

    string str1, str2;

    int pos = 0;

    while(getline(cin, str1)){

        getline(cin, str2);

        for(int i=0; i<str1.length(); i++){
            for(int j=i; j<str1.length(); j++){
                string aux = concat(str1[i], str1[j]); // Concatenar letra por letra

                if((pos = str2.find(aux)) != string::npos)
            }
        }

    }
    
    return 0;

}
#include <bits/stdc++.h>

using namespace std;

int main(){

    int num, pos;
    string in;

    cin >> num;

    while(num){
        
        cin >> in;
        cin >> pos;

        for(int i = 0 ; i < in.length() ; i++){
            
            if((in[i] - pos) < 65) in[i] = 91 - (65 - (in[i] - pos));
            else in[i] = in[i] - pos;

        }

        cout << in << endl;

        num--;

    }

}